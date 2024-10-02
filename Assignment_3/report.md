# Assignment 3 Report
Name: Jessica Vu

Email: my_vu@student.uml.edu

Degree of Success: 100%

## Approach:
For this project, I implemented a program to calculate Fibonacci numbers recursively. The program iterates over a list of inputs, calls a recursive Fibonacci function for each input and stores the outputs. The recursive logic calculates fib(n) by making recursive calls for fib(n-1) and fib(n-2), and then combines the results to return the final Fibonacci number for each input. The recursive version runs much slower and took a lot more cycles than the iterative version, so I start from the iterative version, figure out the logic for recursive version before implementing it in assembly.

## Notes:
- The data starts from address 100, meaning that the inputs will be located from address 100-104, and the outputs will be from address 105-109. That's why I start to see from address 99, then go forward 10 places to see both the inputs and outputs.

- The correct value of fib(25) is 75025, but since I can only store numbers up to a certain size, say 65535 (which is typical in a 16-bit unsigned integer), the result will exceed 65535, it gets wrapped around due to a modulo operation like this: ```75025 mod 65536 = 75025 − 65536 = 9489```. That's why in the output file, fib(25) = 9489

## Problems Encountered and Resolved:

- **Outputs were all zeroes**:  When I initially ran the program, the outputs of the Fibonacci calculations were all zeroes, even though the logic seemed correct. At first I thought that it was because I got stuck in the base case of fib(0), but it was because I clear the stack incorrectly. In the incorrect version, my stack is cleared too early (using INSP 1), causing values to be removed before they can be used in the final addition.

- **Solution**: To resolve this, I adjusted the stack management to ensure that the results of fib(n-1) and fib(n-2) were correctly pushed and popped from the stack at the appropriate times.

## Run The Code:
simply typing ```make```, to clean up type ```make clean```