#include <iostream>
#include "vector.h"

 int main(int argc, char** argv) {

vector v1(1.0, 2.0, 3.0);
std::cout << "Vector v1 is "<<v1<<std::endl;
vector v2(4.0, 5.0, 6.0);
std::cout << "Vector v2 is "<<v2<<std::endl;
vector v3 = v1 + v2;
std::cout << "The vectors added is "<<v3<<std::endl;
vector v4 = v1 - v2;
std::cout << "The vectors subtracted is "<<v4<<std::endl;
vector v5 = v1 * 2.0;
std::cout << "The vector multiplied by a double is "<<v5<<std::endl;
std::cout << "The vector added in place is "<<v1.operator+=(v1)<<std::endl;
auto v6 = v1 * v2;
std::cout << "The vector dot product is "<<v6<<std::endl;
} // end of main