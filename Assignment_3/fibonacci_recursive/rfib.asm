LOOP:	LODD counter:			; Load  counter of numbers to Accumulator (ac)
		JZER DONE:				; If zero, then done (check the ac if it is 0 then JUMP to lebel done)
		SUBD const1:     		; decrement 1 from myCounter (the accumuator of value counter - cons1 .  => counter - cons1)
		STOD counter:			; store the result from substraction to counter . => count = count - cons1
PART1:	LODD daddr: 			; load poiter array to accumuator (ac)
		PSHI					; PUSH argument to stack
		ADDD const1:			; Increment 1
		STOD daddr:				; Store pointer array for next fib 
		CALL RFIB:				; CALL fib with the arg that is on stack
		INSP 1					; Clear stack 
PART2:	PUSH					; Put return on stack (put the result from f(n) from ac to stack )
		LODD raddr:				; load result pointer array
		POPI					; Pop the stack that store the result into array
		ADDD const1:			; Increment 1
		STOD raddr:				; store pointer array for later use
		JUMP LOOP:				; resurcive the function
RFIB:	LODL 1					; Load the arg from stack
		JZER FIBZERO: 			; if counter is zero, go to fibZero
		SUBD const1:			; decrement argument (f(n - 1))
		JZER FIBONE:			; if 0 go to fibOne
		PUSH					; PUSH arg - 1 for recursive CALL
		CALL RFIB:				; Recursive CALL to fib
		PUSH					; PUSH the result onto stack
		LODL 1 					; load arg - 1 from stack
		SUBD const1: 		    ; ac is arg - 2 (f(n - 2))
		PUSH 					; PUSH arg - 2 onto stack
		CALL RFIB: 				; resurcively CALL fib again
CLEAR:	INSP 1					; Clear the arg - 2 (f(n -2)) from stack
		ADDL 0 					; store new result in accumulator/ac
		INSP 2 					; Clear all arguements from stack
		RETN					; Return function
FIBZERO:    LODD const0:        ; set ac = 0
		RETN 					; Return
FIBONE:	LODD const1:			; set ac = 1
		RETN					; Return
DONE:	HALT					; Halt program execution

								
.LOC 100						; data begin at 100
input:	                        ; first input argument will be at address 100
	3
	9
	18
	23
	25
output:	                        ; first output argument will be at address 105 (so fib(3) is at address 105)
	0
	0
	0
	0
	0
daddr:	 input:
raddr:	 output:
const0:	 0                      ; constant 0
const1:	 1		                ; constant 1
counter: 5                      ; number of inputs (5 numbers in this program)
