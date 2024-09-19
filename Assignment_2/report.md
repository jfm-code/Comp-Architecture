# Assignment 2 Report
Name: Jessica Vu

Email: my_vu@student.uml.edu

Degree of Success: 100%

## Approach to the Project:
For this project, I added two positive only IEEE floating point numbers together by emulating the floating point hardware in software. 

Some of the key steps are to figure out which number has the smaller exponent because we will shift the mantissa of that number to the right. This will make the exponents of both numbers equal. Once the exponents are aligned, add the mantissas of the two numbers together. After adding the mantissas, I normalize the result and also check for edge cases like zero, infinity, and denormalized numbers. 

## Problems Encountered and Resolved:

- **Got the NaN**: Early on, when I test my code with the input ```25e37``` and ```15e37```, I got NaN for the emulatec floating result, but that is not correct so I figured out that it was because I forgot to handle the case when there is an infinity exponent pattern (0xFF).

- **Solution**: I fixed by handling the infinity exponent case and got the correct output for the last test case.