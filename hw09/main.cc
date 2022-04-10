#include <cstdio>
#include "will.h"
#include <iostream>

int main(int argc, char** argv) {

FILE* feelay = fopen("feelay", "w");

FileStreamBuf some(feelay, 6);

std:: ostream thing(&some);

thing << "Hello "<<std::endl;	 

} 
