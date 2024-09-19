// Copywright 2024 Jessica Vu
// Computer Architecture Assignment 2
#include <stdio.h>

typedef union {
    float floating_value_in_32_bits;
    unsigned int floating_value_as_int;
    struct sign_exp_mantissa {
        unsigned mantissa:23;
        unsigned exponent:8;
        unsigned sign:1;
    } f_bits;
    struct single_bits {
        unsigned b0 : 1;
        unsigned b1 : 1;
        unsigned b2 : 1;
        unsigned b3 : 1;
        unsigned b4 : 1;
        unsigned b5 : 1;
        unsigned b6 : 1;
        unsigned b7 : 1;
        unsigned b8 : 1;
        unsigned b9 : 1;
        unsigned b10 : 1;
        unsigned b11 : 1;
        unsigned b12 : 1;
        unsigned b13 : 1;
        unsigned b14 : 1;
        unsigned b15 : 1;
        unsigned b16 : 1;
        unsigned b17 : 1;
        unsigned b18 : 1;
        unsigned b19 : 1;
        unsigned b20 : 1;
        unsigned b21 : 1;
        unsigned b22 : 1;
        unsigned b23 : 1;
        unsigned b24 : 1;
        unsigned b25 : 1;
        unsigned b26 : 1;
        unsigned b27 : 1;
        unsigned b28 : 1;
        unsigned b29 : 1;
        unsigned b30 : 1;
        unsigned b31 : 1;
    } bit;
} FLOAT_UN;

int main(int argc, char *argv[]) {
    // Initialize variables
    FLOAT_UN float_32_s1,float_32_s2,float_32_rslt, fun_arg;
    float hardware_result;
    int mant_s1, mant_s2, mant_res, exp_s1, exp_s2;
    int  i, j, k, shift_count;
    int de_norm_s1 = 1, de_norm_s2 = 1; // Set de_norm variables to TRUE
    char bit_string_1[41], bit_string_2[41], bit_string_res[41];

    // Ask user for input
    printf("**********************************************************************\n");
    printf("This program will emulate the addition of two IEEE 754 floating point numbers\n\n");
    printf("Please enter two positive floating point values each with:\n\t- no more than 6 significant digits\n\t- a value between   +   10**37 and 10**-37\n\n");
    printf("Enter floating number 1: ");
    scanf("%g", &float_32_s1.floating_value_in_32_bits);
    printf("Enter floating number 2: ");
    scanf("%g", &float_32_s2.floating_value_in_32_bits);

    // Add the 2 floating points
    mant_s1 = float_32_s1.f_bits.mantissa;
    mant_s2 = float_32_s2.f_bits.mantissa;
    exp_s1  = float_32_s1.f_bits.exponent;
    exp_s2  = float_32_s2.f_bits.exponent;

    // Check if normalized, slam in the hidden bit if normalized
    if(exp_s1) {
        mant_s1 |= (1 << 23);
        de_norm_s1 = 0;
    }
    if(exp_s2) {
        mant_s2 |= (1 << 23);
        de_norm_s2 = 0;
    }
    shift_count = exp_s1 - exp_s2;
    if (shift_count < 0) { // If float_1 has smaller exponent then shift float_1
        shift_count = -(shift_count);
        if (de_norm_s1) {
            while (shift_count > 1) { // If denormalized number, shift 1 less than shift_count
                mant_s1 = mant_s1 >> 1;
                shift_count -= 1;
            }
        } else {
            while (shift_count > 0) { // If normalized number, shift by shift_count
                mant_s1 = mant_s1 >> 1;
                shift_count -= 1;
            }
        }
        float_32_rslt.f_bits.exponent = exp_s2; // Set the result exponent = bigger num exponent
    } else { // If float_2 has smaller exponent then shift float_2
        if (de_norm_s2) {
            while (shift_count > 1) { // If denormalized number, shift 1 less than shift_count
                mant_s2 = mant_s2 >> 1;
                shift_count -= 1;
            }
        } else {
            while (shift_count > 0) { // If normalized number, shift by shift_count
                mant_s2 = mant_s2 >> 1;
                shift_count -= 1;
            }
        }
        float_32_rslt.f_bits.exponent = exp_s1; // Set the result exponent = bigger num exponent
    }
    mant_res = mant_s1 + mant_s2;

    if(mant_res & (1<<24)) {
        mant_res = mant_res >>  1;
        float_32_rslt.f_bits.exponent += 1;
        //shift the mantissa 1 place, increment the exponent and
        //clear HB, leaving 23 live bits for the result mantissa
    }
    //else just clear HB, leaving 23 live bits for the result mantissa
    float_32_rslt.f_bits.mantissa = (mant_res & ~(1<<23));

    // Check for overflow in the exponent (handle the NaN case)
    if (float_32_rslt.f_bits.exponent >= 255) {
        // Set the result to infinity if exponent overflows
        float_32_rslt.f_bits.mantissa = 0;  // Mantissa for infinity is 0
        float_32_rslt.f_bits.exponent = 255;  // Exponent for infinity
        // No need to set the sign bit because we are only adding positive numbers
    }

    // Initialize bit_string to print binary value of 2 floating points
    for (i = 0; i < 40; i++) {
        bit_string_1[i] = ' ';
        bit_string_2[i] = ' ';
        bit_string_res[i] = ' ';
    }
    bit_string_1[40] = '\0';
    bit_string_2[40] = '\0';
    bit_string_res[40] = '\0';
    for (i = 0; i < 32; i++) 
    {
        // Shift right by (31 - i) to get the correct bit, mask it with 1
        int bit_s1 = (float_32_s1.floating_value_as_int >> (31 - i)) & 1;
        int bit_s2 = (float_32_s2.floating_value_as_int >> (31 - i)) & 1;
        int bit_res = (float_32_rslt.floating_value_as_int >> (31 - i)) & 1;

        if (i == 0) {
            bit_string_1[0] = bit_s1 ? '1' : '0'; // Sign bit
            bit_string_2[0] = bit_s2 ? '1' : '0';
            bit_string_res[0] = bit_res ? '1' : '0';
        }
        else if (i >= 1 && i <= 4) {
            bit_string_1[i + 1] = bit_s1 ? '1' : '0'; // Exponent bits
            bit_string_2[i + 1] = bit_s2? '1' : '0';
            bit_string_res[i + 1] = bit_res? '1' : '0';
        }
        else if (i >= 5 && i <= 8) {
            bit_string_1[i + 2] = bit_s1 ? '1' : '0'; // Exponent bits
            bit_string_2[i + 2] = bit_s2 ? '1' : '0';
            bit_string_res[i + 2] = bit_res ? '1' : '0';
        }
        else if (i >= 9 && i <= 11) {
            bit_string_1[i + 3] = bit_s1 ? '1' : '0'; // Mantissa bits
            bit_string_2[i + 3] = bit_s2 ? '1' : '0';
            bit_string_res[i + 3] = bit_res ? '1' : '0';
        }
        else if (i >= 12 && i <= 15) {
            bit_string_1[i + 4] = bit_s1 ? '1' : '0'; // Mantissa bits
            bit_string_2[i + 4] = bit_s2 ? '1' : '0';
            bit_string_res[i + 4] = bit_res ? '1' : '0';
        }
        else if (i >= 16 && i <= 19) {
            bit_string_1[i + 5] = bit_s1 ? '1' : '0'; // Mantissa bits
            bit_string_2[i + 5] = bit_s2 ? '1' : '0';
            bit_string_res[i + 5] = bit_res ? '1' : '0';
        }
        else if (i >= 20 && i <= 23) {
            bit_string_1[i + 6] = bit_s1 ? '1' : '0'; // Mantissa bits
            bit_string_2[i + 6] = bit_s2 ? '1' : '0';
            bit_string_res[i + 6] = bit_res ? '1' : '0';
        }
    }
    
    hardware_result = float_32_s1.floating_value_in_32_bits + float_32_s2.floating_value_in_32_bits;

    printf("\nOriginal pattern of Float 1:    %s\n", bit_string_1);
    printf("Original pattern of Float 2:    %s\n", bit_string_2);
    printf("Bit pattern of result:          %s\n\n", bit_string_res);

    printf("EMULATED FLOATING RESULT FROM PRINTF ==>>> %f\n", float_32_rslt.floating_value_in_32_bits);
    printf("HARDWARE FLOATING RESULT FROM PRINTF ==>>> %f \n", hardware_result);
    printf("**********************************************************************\n");

    return 0;
}
