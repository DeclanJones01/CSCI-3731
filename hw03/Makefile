all: main

main.o: main.cc height.h
	g++ -c -Wall -Werror main.cc

range.o: height.cc height.h
	g++ -c -Wall -Werror height.cc
	
main: main.o height.o
	g++ -o main main.o height.o
	
