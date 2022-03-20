#ifndef VECTOR_H
#define VECTOR_H

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
 double addv(const vector& v1, const vector& v2) const;
 double subv(const vector& v1, const vector& v2) const;
 vector& operator+=(const vector& v1);
 double muldv(const vector& v1) const;
 double mulvv(const vector& v1, const vector& v2) const;
 
 /*
 double subv() const;
 double addplv() const;
 double muldv() const;
 double mulvv() const;
*/
 void set(double x, double y, double z);

 }; // end of vector class

#endif
