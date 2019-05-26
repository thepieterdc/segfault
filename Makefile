all: program

clean:
	rm segfault

program: 
	gcc -O3 -o segfault main.c
