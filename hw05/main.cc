#include <cstdio>
#include <cmath>
#include "graph.h"

int main(int argc, char** argv) {

	double x2= 0.0;
	double y2= 0.0;
	double a = 0.0;
	FILE* fp =fopen("filename","w");
		
	   int h = 20;
	   int w = 80;
	   char** array = new char*[h];
	   array[0] = new char[w*h];
	   for ( int j=1; j<h; j++)
	   {
		   array[j] = array[j-1] + w;
	   }
	   for ( int j=0; j<h; j++)
	   {
		   for(int i=0; i<w; i++)
		   {
			   array[j][i]=' ';
			   
			}
	   }
	   printf("Input an angle \n");
	   scanf("%lf", &a);
	   

    height(a, &x2, &y2, array, w, h);
	
	printf("At angle %.2lf the range was %.2lf and the max height was %.2lf\n", a, x2,y2);
	
    fclose(fp);

	
	   printing(array, w, h);
		    delete [] *array;
	        delete [] array;
	}
