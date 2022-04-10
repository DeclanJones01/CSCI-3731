#ifndef WILL_H
#define WILL_H

#include <iostream>


 class FileStreamBuf : public std:: streambuf {

 private:
 FILE* feelay;
 char* Ch_arr;
 int size;
 
 public:
 FileStreamBuf(const FILE* feelay, int size);
 virtual ~FileStreamBuf();
 FileStreamBuf& operator= (const FileStreamBuf& FileStreamBuf) = delete; 
 virtual int overflow(int c) override;
 virtual int sync() override;
 void setg(char* first, char* next, char* end);
 virtual int underflow() override;
 virtual int uflow() override;

 
 }; 


#endif
