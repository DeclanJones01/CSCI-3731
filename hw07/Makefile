all: main

main.o: main.cc vector.h
	g++ -c -Wall -Werror main.cc

range.o: vector.cc vector.h
	g++ -c -Wall -Werror vector.cc
	
main: main.o vector.o
	g++ -o main main.o vector.o