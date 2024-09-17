// Copywright 2024 Jessica Vu
// Computer Architecture Assignment 1
#include <stdio.h>

int main(int argc, char *argv[])
{
    union float_32 {
        float floating_value_in_32_bits;
        int floating_value_as_int;
        struct sign_exp_mantissa {
            unsigned mantissa : 23;
            unsigned exponent : 8;
            unsigned sign : 1;
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
    } float_32;

    int i;
    char bit_string[41];
    // Reason why we chose size=41 is because:
        // 1 place is for null terminator, 
        // 8 places are for empty spaces between bits,
        // 32 places are for the floating point (32 bits)

    // Initialize bit_string with spaces
    for (i = 0; i < 40; i++)
    {
        bit_string[i] = ' ';
    }
    bit_string[40] = '\0'; // Null-terminate the string

    // Ask user for input
    printf("\nplease enter a floating point number and new-line: ");
    scanf("%f", &float_32.floating_value_in_32_bits);

    // Create the binary representation
    // Indexes 1,6,11,15,20,25,30,35 are for spaces in the binary string (to read easier)
    bit_string[0] = float_32.bit.b31 ? '1' : '0';

    bit_string[2] = float_32.bit.b30 ? '1' : '0';
    bit_string[3] = float_32.bit.b29 ? '1' : '0';
    bit_string[4] = float_32.bit.b28 ? '1' : '0';
    bit_string[5] = float_32.bit.b27 ? '1' : '0';

    bit_string[7] = float_32.bit.b26 ? '1' : '0';
    bit_string[8] = float_32.bit.b25 ? '1' : '0';
    bit_string[9] = float_32.bit.b24 ? '1' : '0';
    bit_string[10] = float_32.bit.b23 ? '1' : '0';

    bit_string[12] = float_32.bit.b22 ? '1' : '0';
    bit_string[13] = float_32.bit.b21 ? '1' : '0';
    bit_string[14] = float_32.bit.b20 ? '1' : '0';

    bit_string[16] = float_32.bit.b19 ? '1' : '0';
    bit_string[17] = float_32.bit.b18 ? '1' : '0';
    bit_string[18] = float_32.bit.b17 ? '1' : '0';
    bit_string[19] = float_32.bit.b16 ? '1' : '0';

    bit_string[21] = float_32.bit.b15 ? '1' : '0';
    bit_string[22] = float_32.bit.b14 ? '1' : '0';
    bit_string[23] = float_32.bit.b13 ? '1' : '0';
    bit_string[24] = float_32.bit.b12 ? '1' : '0';

    bit_string[26] = float_32.bit.b11 ? '1' : '0';
    bit_string[27] = float_32.bit.b10 ? '1' : '0';
    bit_string[28] = float_32.bit.b9 ? '1' : '0';
    bit_string[29] = float_32.bit.b8 ? '1' : '0';

    bit_string[31] = float_32.bit.b7 ? '1' : '0';
    bit_string[32] = float_32.bit.b6 ? '1' : '0';
    bit_string[33] = float_32.bit.b5 ? '1' : '0';
    bit_string[34] = float_32.bit.b4 ? '1' : '0';

    bit_string[36] = float_32.bit.b3 ? '1' : '0';
    bit_string[37] = float_32.bit.b2 ? '1' : '0';
    bit_string[38] = float_32.bit.b1 ? '1' : '0';
    bit_string[39] = float_32.bit.b0 ? '1' : '0';

    printf("\nthe floating value entered is broken out as:\n");

    // Mantissa (32 bits)
    printf("    %-10s: 0x%06x   or:             %c%c%c %c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c\n",
        "mantissa", float_32.f_bits.mantissa,
        bit_string[12], bit_string[13], bit_string[14], bit_string[16],
        bit_string[17], bit_string[18], bit_string[19], bit_string[21],
        bit_string[22], bit_string[23], bit_string[24], bit_string[26],
        bit_string[27], bit_string[28], bit_string[29], bit_string[31],
        bit_string[32], bit_string[33], bit_string[34], bit_string[36],
        bit_string[37], bit_string[38], bit_string[39]);

    // Exponent (8 bits)
    printf("    %-10s: 0x%02x       or:   %c%c%c%c %c%c%c%c\n",
        "exponent", float_32.f_bits.exponent,
        bit_string[2], bit_string[3], bit_string[4], bit_string[5],
        bit_string[7], bit_string[8], bit_string[9], bit_string[10]);

    // Sign (1 bit)
    printf("    %-10s: %d          or: %c\n", "sign", float_32.f_bits.sign, bit_string[0]);

    printf("    %-10s: %f   or: %s\n", "in base 10", float_32.floating_value_in_32_bits, bit_string);

    return 0;
}
