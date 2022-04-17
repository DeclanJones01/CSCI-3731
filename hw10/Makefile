all: main

main.o: main.cc Pattern.h
	g++ -c -Wall -Werror main.cc

Pattern.o: Pattern.cc Pattern.h
	g++ -c -Wall -Werror Pattern.cc
	
main: main.o Pattern.o
	g++ -o main main.o Pattern.o
	
