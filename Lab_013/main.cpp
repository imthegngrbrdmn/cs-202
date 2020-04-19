#include "wrapper.h"

#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	Wrapper<double> d{ 7.8 };
	Wrapper<int> i{ 9 };
	Wrapper<std::string> s{ "Why was six afraid of seven?" };
	std::cout << s << "\nBecause " << d << "." << i << std::endl;
	return 0;
}