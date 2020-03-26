#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
public:
	Complex();
	Complex(double real, double imag = 0);
	Complex operator+(const Complex& complex);
	Complex& operator+=(const Complex& complex);
	double real() const;
	double imag() const;
private:
	double real_{ 0 };
	double imag_{ 0 };
};

Complex operator+(double lhs, const Complex rhs);
std::ostream& operator<<(std::ostream& os, const Complex& complex);

#endif