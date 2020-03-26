#include "complex.h"

Complex::Complex()
{
}

Complex::Complex(double real, double imag)
	: imag_(imag), real_(real)
{
}

Complex Complex::operator+(const Complex& complex)
{
	return Complex(real_+complex.real(),imag_+complex.imag());
}

Complex& Complex::operator+=(const Complex& complex)
{
	*this = *this + complex;
	return *this;
}

double Complex::real() const
{
	return real_;
}

double Complex::imag() const
{
	return imag_;
}

Complex operator+(double lhs, const Complex rhs)
{
	return Complex(lhs+rhs.real(),rhs.imag());
}

std::ostream& operator<<(std::ostream& os, const Complex& complex)
{
	os << complex.real() << " + " << complex.imag() << "i";
	return os;
}
