#ifndef PATTERN_H
#define PATTERN_H
#include <unordered_map>
#include <string>

class Pattern {

	private:
		std::string pattern;
		int count;
		double probability;
		double totProbability;
 
	public:
		Pattern(std::string pattern, int count);
		virtual ~Pattern();

 
 }; 
#endif