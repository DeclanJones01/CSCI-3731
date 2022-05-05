#ifndef PLANET_H
#define PLANET_H
#include <iostream>
#include "vector.h"

class Planet {
	 
	 private:
		static const double g = 6.67408E-11;
		const double M = 5.972E24;
	//	vector g; not a member of the class depends on positions etc...
		double rp = 6.378E6;
		vector r;

	public:
		Planet();
		double getr();
		virtual ~Planet(); 
		bool accel(vector& r, vector& rp);

};
#endif