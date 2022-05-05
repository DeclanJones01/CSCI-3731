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

 return x;

 } // end of getX method


 double vector::getY() const {

 return y;

 } // end of getY method
 
 double vector::getZ() const {

 return z;

 } // end of getZ method
 
vector vector::operator+(const vector& v)const {

 return vector(this->getX() + v.getX(), this->getY() + v.getY(), this->getZ() + v.getZ());
}

vector vector::operator-(const vector& v)const {

 return vector(this->getX() - v.getX(), this->getY() - v.getY(), this->getZ() - v.getZ());
}


vector& vector::operator+=(const vector& v1) {

 x += v1.getX();
 y += v1.getY();
 z += v1.getZ();

 return *this;
}

vector vector::operator*(double v1)const {

 return vector(this->getX() * v1, this->getY() * v1, this->getZ() *v1);
}

double vector::operator*(const vector& v)const {

 return (this->getX() * v.getX() + this->getY() * v.getY() + this->getZ() * v.getZ());
}
 void vector::set(double x, double y, double z) {

 this->x = x;
 this->y = y;
 this->z = z;

 } // end of set method
 
 std::ostream& operator<<(std::ostream& out, const vector& v){
	 
	 out<<"("<<v.x<<", "<<v.y<<", "<<v.z<<")";
	 return out;
	 
 }