all: dir

dir: dir.o 
	gcc  -o dir dir.o 

dir.o: dir.c
	gcc -c -Wall dir.c


.PHONY: clean
clean:
	@rm  -f *.o dir