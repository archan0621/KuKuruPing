#Select Compiler
CC = gcc

ping : main.o icmp.o
	$(CC) -o ping main.o icmp.o

main.o : main.c
	$(CC) -c -o main.o main.c

icmp.o : icmp.c
	$(CC) -c -o icmp.o icmp.c

clean :
	rm -f *.o ping