#include <cstdio>
#include <cmath>
#include "height.h"

int main(int argc, char** argv) {

	double x2= 0.0;
	double y2= 0.0;
	double a = 1.0;
	FILE* fp =fopen("filename","w");
	
	while(a<=90)
	{
		
	
    height(a, &x2, &y2);
	
	fprintf(fp,"At angle %.2lf the range was %.2lf and the max height was %.2lf\n", a, x2,y2);
	
	printf("At angle %.2lf the range was %.2lf and the max height was %.2lf\n", a, x2,y2);
	a++;
	}
    fclose(fp);
} 
