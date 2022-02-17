all: main

main.o: main.cc graph.h
	g++ -c -Wall -Werror main.cc

range.o: graph.cc graph.h
	g++ -c -Wall -Werror graph.cc
	
main: main.o graph.o
	g++ -o main main.o graph.o
	
