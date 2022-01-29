#include "range.h"
#include <cmath>
#include <cstdio>

double range(double angle) {
    
		double radians = 0.0;
		radians = angle * (M_PI / 180.0);
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

        while (y >= 0.0) {

            x = x + vx;
            y = y + vy;

            v = sqrt((vx * vx) + (vy * vy));
            
            D = (.5 * 0.45 * 0.03 * 1.2 * (v * v) / 30.0);

            ax = (-D * vx) / v;
            ay = (-9.81 - D * vy) / v;

            printf("At time %lf the cannon ball traveled %lf meters.\n",t, x);

            vx = vx + ax * 1.0;
            vy = vy + ay * 1.0;

            t = t + 1.0;
        }
        printf("It took %lf seconds for the cannon ball to hit the ground\n", t);

        return x;
} 
