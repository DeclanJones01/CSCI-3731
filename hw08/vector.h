#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

 class vector {
	
 private:
 double x = 0.0;
 double y = 0.0;
 double z = 0.0;
 
 public:
 vector();
 vector(double x, double y, double z);
 virtual ~vector();

 double getX() const;
 double getY() const;
 double getZ() const;
 vector operator+(const vector& v)const;
 vector operator-(const vector& v)const;
 vector& operator+=(const vector& v1);
 vector operator*(double v)const;
 double operator*(const vector& v)const;
 
 void set(double x, double y, double z);
 
 friend std::ostream& operator<<(std::ostream& out, const vector& v);

 }; // end of vector class
 #endif