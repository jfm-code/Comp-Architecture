# Output Of The Program

### Test case 1:
- Input: ```34.5``` and ```1.25```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_2$ ./add_bits
**********************************************************************
This program will emulate the addition of two IEEE 754 floating point numbers

Please enter two positive floating point values each with:
        - no more than 6 significant digits
        - a value between   +   10**37 and 10**-37

Enter floating number 1: 34.5
Enter floating number 2: 1.25

Original pattern of Float 1:    0 1000 0100 000 1010 0000 0000          
Original pattern of Float 2:    0 0111 1111 010 0000 0000 0000          
Bit pattern of result:          0 1000 0100 000 1111 0000 0000          

EMULATED FLOATING RESULT FROM PRINTF ==>>> 35.750000
HARDWARE FLOATING RESULT FROM PRINTF ==>>> 35.750000 
**********************************************************************
```

### Test case 2:
- Input: ```2.75e3``` and ```256.0```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_2$ ./add_bits
**********************************************************************
This program will emulate the addition of two IEEE 754 floating point numbers

Please enter two positive floating point values each with:
        - no more than 6 significant digits
        - a value between   +   10**37 and 10**-37

Enter floating number 1: 2.75e3
Enter floating number 2: 256.0

Original pattern of Float 1:    0 1000 1010 010 1011 1110 0000          
Original pattern of Float 2:    0 1000 0111 000 0000 0000 0000          
Bit pattern of result:          0 1000 1010 011 1011 1110 0000          

EMULATED FLOATING RESULT FROM PRINTF ==>>> 3006.000000
HARDWARE FLOATING RESULT FROM PRINTF ==>>> 3006.000000 
**********************************************************************
```

### Test case 3:
- Input: ```1.4e-3``` and ```13.0```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_2$ ./add_bits
**********************************************************************
This program will emulate the addition of two IEEE 754 floating point numbers

Please enter two positive floating point values each with:
        - no more than 6 significant digits
        - a value between   +   10**37 and 10**-37

Enter floating number 1: 1.4e-3
Enter floating number 2: 13.0

Original pattern of Float 1:    0 0111 0101 011 0111 1000 0000          
Original pattern of Float 2:    0 1000 0010 101 0000 0000 0000          
Bit pattern of result:          0 1000 0010 101 0000 0000 0101          

EMULATED FLOATING RESULT FROM PRINTF ==>>> 13.001400
HARDWARE FLOATING RESULT FROM PRINTF ==>>> 13.001400 
**********************************************************************
```

### Test case 4:
- Input: ```7.491``` and ```4.617e20```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_2$ ./add_bits
**********************************************************************
This program will emulate the addition of two IEEE 754 floating point numbers

Please enter two positive floating point values each with:
        - no more than 6 significant digits
        - a value between   +   10**37 and 10**-37

Enter floating number 1: 7.491
Enter floating number 2: 4.617e20

Original pattern of Float 1:    0 1000 0001 110 1111 1011 0110          
Original pattern of Float 2:    0 1100 0011 100 1000 0011 1010          
Bit pattern of result:          0 1100 0011 100 1000 0011 1010          

EMULATED FLOATING RESULT FROM PRINTF ==>>> 461699991414396420096.000000
HARDWARE FLOATING RESULT FROM PRINTF ==>>> 461699991414396420096.000000 
**********************************************************************
```

### Test case 5:
- Input: ```9643.0``` and ```1.237e-2```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_2$ ./add_bits
**********************************************************************
This program will emulate the addition of two IEEE 754 floating point numbers

Please enter two positive floating point values each with:
        - no more than 6 significant digits
        - a value between   +   10**37 and 10**-37

Enter floating number 1: 9643.0
Enter floating number 2: 1.237e-2

Original pattern of Float 1:    0 1000 1100 001 0110 1010 1100          
Original pattern of Float 2:    0 0111 1000 100 1010 1010 1011          
Bit pattern of result:          0 1000 1100 001 0110 1010 1100          

EMULATED FLOATING RESULT FROM PRINTF ==>>> 9643.011719
HARDWARE FLOATING RESULT FROM PRINTF ==>>> 9643.012695 
**********************************************************************
```

### Test case 6:
- Input: ```25e37``` and ```15e37```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_2$ ./add_bits
**********************************************************************
This program will emulate the addition of two IEEE 754 floating point numbers

Please enter two positive floating point values each with:
        - no more than 6 significant digits
        - a value between   +   10**37 and 10**-37

Enter floating number 1: 25e37
Enter floating number 2: 15e37

Original pattern of Float 1:    0 1111 1110 011 1100 0001 0100          
Original pattern of Float 2:    0 1111 1101 110 0001 1011 0001          
Bit pattern of result:          0 1111 1111 000 0000 0000 0000          

EMULATED FLOATING RESULT FROM PRINTF ==>>> inf
HARDWARE FLOATING RESULT FROM PRINTF ==>>> inf 
**********************************************************************
```