all: main

Planet.o: Planet.cc Planet.h
	g++ -c -Wall -Werror Planet.cc

vector.o: vector.cc vector.h
	g++ -c -Wall -Werror vector.cc
	
main.o: main.cc Planet.h
	g++ -c -Wall -Werror main.cc

main: main.o Planet.o
	g++ -o main main.o Planet.o