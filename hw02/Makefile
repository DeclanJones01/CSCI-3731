all: main

main.o: main.cc range.h
	g++ -c -Wall -Werror main.cc

range.o: range.cc range.h
	g++ -c -Wall -Werror range.cc
	
main: main.o range.o
	g++ -o main main.o range.o
	
