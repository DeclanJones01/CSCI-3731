#include "will.h"
#include <iostream>


	FileStreamBuf::FileStreamBuf(const FILE* feelay, int size)
		: std:: streambuf(){
			Ch_arr = new char[size];
			setp (Ch_arr, Ch_arr + size);
		
	}
	
	int FileStreamBuf::sync(){
		
		fwrite(Ch_arr, sizeof(char), size, feelay);
		setp (Ch_arr, Ch_arr + size);
		return 0;
		
	}
	
	void FileStreamBuf::setg(char* first, char* next, char* end){
		
		
		
	}
	
	int FileStreamBuf::underflow(){
		
		fread(Ch_arr, sizeof(char), size, feelay);
		setg(Ch_arr, Ch_arr, Ch_arr + size);
		return Ch_arr[0];
		
	}

	int FileStreamBuf::uflow(){
		
		fread(Ch_arr, sizeof(char), size, feelay);
		setg(Ch_arr, Ch_arr+1, Ch_arr + size);
		return Ch_arr[1];
		
	}

	
	int FileStreamBuf::overflow(int c){
		
		fwrite(Ch_arr, sizeof(char), size, feelay);
		Ch_arr[0]= c;
		setp (Ch_arr + 1, Ch_arr + size); 
		return c;
		
	}
		
	
	FileStreamBuf::~FileStreamBuf(){
	fclose(feelay);
		
	}
	
	
	
	
	
	