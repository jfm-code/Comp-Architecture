all : ifib.asm
	./masm < ifib.asm > ifib.obj
	./mic1 prom.dat ifib.obj 0 2048

clean :
	rm *.obj 