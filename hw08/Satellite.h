#ifndef SATELLITE_H
#define SATELLITE_H
#include <iostream>
#include "vector.h"

class Satellite {
	 
	 private:
	
	 planet& planetSize;
	 vector position(0.0, 0.0, 0.0);
	 vector velocity(0.0, 0.0, 0.0);
	 
	 public:
	 
	 Satellite();
	 bool update(int dt)
	 virtual ~Satellite();
	 
	 
	 
 }; //end of Satellite class