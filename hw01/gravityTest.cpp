#include <cstdio>

int main()
{
double y = 1000.0; // height above ground
double v = 0.0; // velocity
double time = 0.0; // time
double dt = 1.0; // delta time
double g = -9.81; // accelleration of gravity
double a = 0.0; // accelleration 
double C = 1.0; // drag coefficient
double A = 1.0; // area of object
double p = 1.2; // density of air
double m = 80.0; // mass of the object

while(y > 0.0) // loop until splat
{

a = g + (0.5 * C * A * p * v * v) / m; // accelleration equation

time += dt; // time until splat
y += v * dt; // change in height
v += a * dt; // change in velocity

printf("%lf meters left %lf seconds fallen\n", y, time);

}

printf("You have %lf seconds to rethink your life choices", time); // output results until splat

}