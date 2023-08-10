// CMake_SWIG.cpp : Defines the entry point for the application.
//

#include "CMake_SWIG.h"
#include <iostream>

int Adder(int a, int b) {
	std::cout << "Testing if SWIG can see std libraries: " << a * b << " ";
	return a + b;

}