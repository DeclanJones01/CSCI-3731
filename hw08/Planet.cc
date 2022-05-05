#include "Planet.h"
#include "vector.h"
#include <iostream>
#include <math.h>

Planet::Planet() {

}

Planet::~Planet() {

}

bool Planet::accel(vector& r, double rp) {

	vector r;
	double rSquared = r * r;
	vector gacceleration = -((g * m) / (rSquared * sqrt(rSquared)) * r);
	bool crash = false;

	if (rSquared < (rp)) {
		return true;
	}
	
	return false;
}
