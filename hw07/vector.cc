#include "vector.h" 
#include <iostream>


 vector::vector() {

 } // end of constructor

 vector::vector(double x, double y, double z) {

 this->x = x;
 this->y = y;
 this->z = z;

 } // end of constructor

 vector::~vector() {

 }
 
 double vector::getX() const {
std::cout << "The value of x is "<<x<<std::endl;
 return x;

 } // end of getX method


 double vector::getY() const {
std::cout << "The value of y is "<<y<<std::endl;
 return y;

 } // end of getY method
 
 double vector::getZ() const {
std::cout << "The value of z is "<<z<<std::endl;
 return z;

 } // end of getZ method
 
 double vector::addv(const vector& v1, const vector& v2) const {

 auto dx = v1.getX() + v2.getX();
 auto dy = v1.getY() + v2.getY();
 auto dz = v1.getZ() + v2.getZ();

std::cout << "The vectors added are "<<dx<< dy << dz <<std::endl;

 return dx;
}

double vector::subv(const vector& v1, const vector& v2) const {

 auto dx = v1.getX() - v2.getX();
 auto dy = v1.getY() - v2.getY();
 auto dz = v1.getZ() - v2.getZ();

std::cout << "The vectors subtracted are "<<dx<< dy << dz <<std::endl;

 return dx;
}

vector& vector::operator+=(const vector& v1) {

 x += v1.getX();
 y += v1.getY();
 z += v1.getZ();
std::cout << "The vector added in place is "<<x <<y <<z <<std::endl;
 return *this;
}

double vector::muldv(const vector& v1) const {

 auto dx = v1.getX() * 4;
 auto dy = v1.getY() * 4;
 auto dz = v1.getZ() * 4;

std::cout << "The vector multiplied by a number is "<<dx<< dy << dz <<std::endl;

 return dx;
}

double vector::mulvv(const vector& v1, const vector& v2) const {

 auto dx = v1.getX() * v2.getX();
 auto dy = v1.getY() * v2.getY();
 auto dz = v1.getZ() * v2.getZ();
 
 auto da = dx+dy;
 auto db = da+dz;

std::cout << "The dot product is "<<db<<std::endl;

 return dx;
}
  // end of addv method
 /*
 double vector::subv() const {
std::cout << "The vectors subtracted are "<<vs<<std::endl;
 return vs;

 } // end of addv method
 
 double vector::addplv() const {
std::cout << "A vector added in place is "<<vpl<<std::endl;
 return vpl;

 } // end of addplv method
 
 double vector::muldv() const {
std::cout << "A vector multiplied by a double is "<<vmd<<std::endl;
 return vmd;

 } // end of muldv method
 
 double vector::mulvv() const {
std::cout << "The vectors multiplied is "<<vmv<<std::endl;
 return vmv;

 } // end of mulvv method
*/
 void vector::set(double x, double y, double z) {

 this->x = x;
 this->y = y;
 this->z = z;

 } // end of set method