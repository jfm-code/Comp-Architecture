# Assignment 1 Report
Name: Jessica Vu

Email: my_vu@student.uml.edu

Degree of Success: 100%

## Approach to the Project:
For this project, I worked on developing a C program to convert floating-point numbers into their binary, hexadecimal, and decimal representations while breaking out the individual components (sign, exponent, and mantissa). I started by using bitwise operations and unions to extract the components from the IEEE 754 floating-point format.

I implemented ```printf``` with specific format specifiers to control alignment and output precision, making the results easier to interpret.

## Problems Encountered and Resolved:

- **Segmentation Fault**: Early on, my program was encountering a segmentation fault due to incorrect indexing in the bit-string array. It didn't take me long to figure out why as I got this segmentation fault before many times. This is due to my manual assignment of bits that caused out-of-bounds error.

- **Solution**: I fixed the segmentation fault by ensuring that the indexes are correct.

## Notes:
Instead of using a bit_string of 43 characters like in the sample code that Professor gave us, I only use 41 characters. This is because:
- 1 place is for null terminator, 
- 8 places are for empty spaces between bits,
- 32 places are for the floating point (32 bits)

The sum of these will be 41. I don't see any other reasons that we should use 43 characters.