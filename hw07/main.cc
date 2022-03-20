#include <iostream>
#include "vector.h"

 int main(int argc, char** argv) {

vector v1(1.0, 2.0, 3.0);

vector v2(4.0, 5.0, 6.0);

v1.addv(v1,v2);

v1.subv(v1,v2);

v1.operator+=(v1);

v1.muldv(v1);

v1.mulvv(v1,v2);

} // end of main