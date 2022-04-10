all: main

main.o: main.cc will.h
	g++ -c -Wall -Werror main.cc

will.o: will.cc will.h
	g++ -c -Wall -Werror will.cc
	
main: main.o will.o
	g++ -o main main.o will.o
	
