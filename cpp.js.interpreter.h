#pragma once

#include <sstream>
#include <vector>

class cppjsinterpreter
{
public:
	cppjsinterpreter(std::stringstream &inter);
	~cppjsinterpreter();
	void run();

private:
	unsigned char* ptr;
	std::vector<int> instructions;
};

