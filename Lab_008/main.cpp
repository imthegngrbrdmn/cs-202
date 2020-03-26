#include "complex.h"
#include <iostream>

int main(int argc, char** argv)
{
	Complex num1 = Complex();
	std::cout << num1 << std::endl;
	Complex num2 = Complex(7, 3);
	std::cout << num2 << std::endl;
	std::cout << 5 + num2 << std::endl;
	Complex num3 = Complex(1, 2);
	std::cout << num3 + num2 << std::endl;
	num3 += num2;
	std::cout << num3 << std::endl;
}