all: main

main.o: main.cc wavy.h
	g++ -c -Wall -Werror main.cc

range.o: wavy.cc wavy.h
	g++ -c -Wall -Werror wavy.cc
	
main: main.o wavy.o
	g++ -o main main.o wavy.o
	
