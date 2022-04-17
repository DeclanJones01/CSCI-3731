#include <cstdio>
#include <iostream>
#include <unordered_map>
#include "Pattern.h"
#include <fstream>
#include <vector>

int main(int argc, char** argv) {
		//std::cout <<"1 "<<std::endl;
		std::unordered_map<std::string, int> counts;
		//std::cout <<"2 "<<std::endl;
		std::ifstream in("book.txt");
		//std::cout <<"3 "<<std::endl;
		std::string buffer;
		//std::cout <<"4 "<<std::endl;
		int length = 8;
		//std::cout <<"5 "<<std::endl;
	while(in.good()){
		//std::cout <<"6 "<<std::endl;
		std::string word;
		//std::cout <<"7 "<<std::endl;
		in>>word;	
		//std::cout <<"8 "<<std::endl;
		buffer += word+" ";
		//std::cout <<"9 "<<std::endl;
	}
	
		//std::cout <<"10 "<<std::endl;
	for(unsigned int i=0; i<buffer.length()-length; ++i){
		//std::cout <<"11 "<<std::endl;
		std::string s;
		//std::cout <<"12 "<<std::endl;
		for(int j=0; j<length; ++j){
			//std::cout <<"13 "<<std::endl;
			s+= buffer[i+j];				// seg fault around here
			//std::cout <<"14 "<<std::endl;
		}
		//std::cout <<"15 "<<std::endl;
			if(counts.find(s) == counts.end()){
				//std::cout <<"16 "<<std::endl;
				counts[s] = 0;
				//std::cout <<"17 "<<std::endl;
			}
		//std::cout <<"18 "<<std::endl;
		++counts[s];
		//std::cout <<"19 "<<std::endl;
	}
		//std::cout <<"20 "<<std::endl;
		std::unordered_map<std::string, std::vector<Pattern*>> lookupTable;
		//std::cout <<"21 "<<std::endl;

	for(auto elem :counts ) {
		//	std::cout <<"22 "<<std::endl;
		auto lookup = elem.first;
		auto table = elem.second;
		std::string sub = lookup.substr (0, 7);
		std::cout << lookup<<" "<<table<<std::endl;
		 
		if(lookupTable.find(sub) == lookupTable.end()){ // if sub isnt in the lookuptable then creates new vector to hold it
					
			lookupTable[sub]= std::vector<Pattern*>(); 
					
		}
		
		lookupTable[sub].push_back(new Pattern(sub, 0)); // Adds new pattern to lookupTable
			
	}
	 
	 
		in.close();   
} 
