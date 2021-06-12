calculator : main.o functions.o
	gcc -o calculator main.o functions.o

main.o : main.c
	gcc -c -o main.o main.c
functions.o : functions.c
	gcc -c -o functions.o functions.c
clean :
	rm *.o calculator
