#include "pch.h"
#include "cpp.js.interpreter.h"


cppjsinterpreter::cppjsinterpreter(std::stringstream &inter)
{
	while (inter) {
		int i;
		inter >> i;
		switch (i) {
		default:
			break;
		case 471:
			instructions.push_back(1);
			break;
		case 17524:
			instructions.push_back(2);
			break;
		case 4:
			instructions.push_back(3);
		case 31:
			instructions.push_back(4);
		case 0:
			instructions.push_back(5);
		//TODO: Implement while
		}
	}
}


cppjsinterpreter::~cppjsinterpreter()
{
	delete ptr;
}

void cppjsinterpreter::run() {
	for (auto i : instructions) {
		switch (i) {
		default:
			break;
		case 1:
			ptr++;
		case 2:
			ptr--;
		case 3:
			++(*ptr);
		case 4:
			--(*ptr);
		case 5:
			putchar(*ptr);
		//TODO: Implement while
		}
	}
}