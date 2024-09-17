# Output Of The Program

### Test case 1:
- Input: ```237.75```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: 237.75

the floating value entered is broken out as:
    mantissa  : 0x6dc000   or:             110 1101 1100 0000 0000 0000
    exponent  : 0x86       or:   1000 0110
    sign      : 0          or: 0
    in base 10: 237.750000   or: 0 1000 0110 110 1101 1100 0000 0000 0000
```

### Test case 2:
- Input: ```-.0000005126```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: -.0000005126

the floating value entered is broken out as:
    mantissa  : 0x09999b   or:             000 1001 1001 1001 1001 1011
    exponent  : 0x6a       or:   0110 1010
    sign      : 1          or: 1
    in base 10: -0.000001   or: 1 0110 1010 000 1001 1001 1001 1001 1011
```

### Test case 3:
- Input: ```-92457321.670245```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: -92457321.670245

the floating value entered is broken out as:
    mantissa  : 0x30592d   or:             011 0000 0101 1001 0010 1101
    exponent  : 0x99       or:   1001 1001
    sign      : 1          or: 1
    in base 10: -92457320.000000   or: 1 1001 1001 011 0000 0101 1001 0010 1101
```

### Test case 4:
- Input: ```6.023E+23```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: 6.023E+23

the floating value entered is broken out as:
    mantissa  : 0x7f157f   or:             111 1111 0001 0101 0111 1111
    exponent  : 0xcd       or:   1100 1101
    sign      : 0          or: 0
    in base 10: 602299993035875123462144.000000   or: 0 1100 1101 111 1111 0001 0101 0111 1111
```

### Test case 5:
- Input: ```1.67339E-40```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: 1.67339E-40

the floating value entered is broken out as:
    mantissa  : 0x01d279   or:             000 0001 1101 0010 0111 1001
    exponent  : 0x00       or:   0000 0000
    sign      : 0          or: 0
    in base 10: 0.000000   or: 0 0000 0000 000 0001 1101 0010 0111 1001
```

### Test case 6:
- Input: ```6.0000```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: 6.0000

the floating value entered is broken out as:
    mantissa  : 0x400000   or:             100 0000 0000 0000 0000 0000
    exponent  : 0x81       or:   1000 0001
    sign      : 0          or: 0
    in base 10: 6.000000   or: 0 1000 0001 100 0000 0000 0000 0000 0000
```

### Test case 7:
- Input: ```-6.0000```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: -6.0000

the floating value entered is broken out as:
    mantissa  : 0x400000   or:             100 0000 0000 0000 0000 0000
    exponent  : 0x81       or:   1000 0001
    sign      : 1          or: 1
    in base 10: -6.000000   or: 1 1000 0001 100 0000 0000 0000 0000 0000
```

### Test case 8:
- Input: ```98234751```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: 98234751

the floating value entered is broken out as:
    mantissa  : 0x3b5e30   or:             011 1011 0101 1110 0011 0000
    exponent  : 0x99       or:   1001 1001
    sign      : 0          or: 0
    in base 10: 98234752.000000   or: 0 1001 1001 011 1011 0101 1110 0011 0000
```

### Test case 9:
- Input: ```-140948024014293401298401```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: -140948024014293401298401

the floating value entered is broken out as:
    mantissa  : 0x6ec676   or:             110 1110 1100 0110 0111 0110
    exponent  : 0xcb       or:   1100 1011
    sign      : 1          or: 1
    in base 10: -140948022630708315947008.000000   or: 1 1100 1011 110 1110 1100 0110 0111 0110
```

### Test case 10:
- Input: ```00000000123```
- Output:
```
jessicavu04@JFM-LAPTOP:~/CollegeFall2024/Comp-Architecture/Assignment_1$ ./convert_bits

please enter a floating point number and new-line: 00000000123

the floating value entered is broken out as:
    mantissa  : 0x760000   or:             111 0110 0000 0000 0000 0000
    exponent  : 0x85       or:   1000 0101
    sign      : 0          or: 0
    in base 10: 123.000000   or: 0 1000 0101 111 0110 0000 0000 0000 0000
```

