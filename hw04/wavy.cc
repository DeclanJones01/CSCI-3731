#include "wavy.h"
#include <cmath>
#include <cstdio>
#include <iostream>
#include <cstring>

void wavy(int a) {
 	FILE* fp =fopen("example.wav","rb");
	
	char RIFF[a];
	RIFF[4]='\0';
	fread(RIFF, sizeof(char), 4, fp);
	printf(" RIFF: %s\n", RIFF);
	
	int num;
	fread(&num, sizeof(int), 1, fp);
	printf(" num: %d\n", num);
	
	char WAVE[5];
	WAVE[4]='\0';
	fread(WAVE, sizeof(char), 4, fp);
	printf(" WAVE: %s\n", WAVE);
	
	while(true)
	{
		int count;
		char FOURCC[5];
		FOURCC[4]='\0';
		count = fread(FOURCC, sizeof(char), 4, fp);
		printf(" FOURCC: %s\n", FOURCC);
		if(count==0)
		{
			break;
		}
		
		int size;
		fread(&size, sizeof(size), 1, fp);
		printf(" size: %d\n", size);
		
		unsigned char content[size];
		fread(content, sizeof(char), size, fp);
		
		if(!strncmp(FOURCC, "fmt ", 4))
		{
			short format = *((short*)(content+0));
			printf(" format: %hi\n", format);
			
			short nchannels = *((short*)(content+2));
			printf(" nchannels: %hi\n", nchannels);
			
			int rate = *((int*)(content+4));
			printf(" rate: %d\n", rate);
			
			int byte_rate = *((int*)(content+8));
			printf(" byte_rate: %d\n", byte_rate);
			
			short align = *((short*)(content+12));
			printf(" align: %hi\n", align);
			
			short bits_per_sample = *((short*)(content+14));
			printf(" bits_per_sample: %hi\n", bits_per_sample);
			
		}
		
		if(!strncmp(FOURCC, "data", 4))
		{
			
			int data_data = *((int*)(content));
			printf(" data_data: %d\n", data_data);
			
		}
	}
	fclose(fp);
	
} 
