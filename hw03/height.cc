#include "height.h"
#include <cmath>
#include <cstdio>

double height(double angle, double* x2, double* y2) {
    
		double radians = 0.0;
		radians = (angle * M_PI / 180.0);
		double v0 = 250.0;
		double vx = v0 * cos(radians);
        double vy = v0 * sin(radians);
        double x = 0.0;
        double y = 0.0;
        double v = 0.0;
        double D = 0.0;
        double ax = 0.0;
        double ay = 0.0;
        double t = 0.0;
		double x1 = 0.0;
		double y1 = 0.0;
		double dt = 1.0;

        while (y >= 0.0) {

            x = x + vx*dt;
            y = y + vy*dt;
			if(y>y1)
			{
				y1=y;
			}
			if(x>x1)
			{
				x1=x;
			}
			
			*x2=x1;
			*y2=y1;
			
            v = sqrt((vx * vx) + (vy * vy));
            
            D = .5 *( 0.45 * 0.03 * 1.2 * (v * v) / 30.0);

            ax = (-D * vx / v);
            ay = (-9.81 - D * vy / v);

           // printf("At time %lf the cannon ball traveled %lf meters.\n",t, x);

            vx = vx + ax * dt;
            vy = vy + ay * dt;

            t = t + dt;
        }
       // printf("At angle %.2lf the range was %.2lf and the max height was %.2lf\n", angle, x,y1);

        return x;
} 
