#include "graph.h"
#include <cmath>
#include <cstdio>

double height(double angle, double* x2, double* y2, char** array, int w, int h) 
{
    
	 
			
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
		double x_scale = 40.0;
		double y_scale = 100.0;
		int nx = 0;
		int ny = 0;

        while (y >= 0.0) {
			
			if(y>0)
			{
			array[ny][nx]='*';
			}
		
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

            vx = vx + ax * dt;
			nx = x/x_scale;
			
			
            vy = vy + ay * dt;
			ny = y/y_scale;
			

            t = t + dt;
        }
	  
        return x;
} 
void printing( char** array, int w, int h)
{
	 for ( int j=h-1; j>0; j--)
	   {
		   for(int i=0; i<w; i++)
		   {
			   
			   printf("%c", array[j][i]);
			   
			}
			printf("\n");
		}
		   
}