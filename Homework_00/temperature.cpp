#include <iostream>
#include <cstdlib>
double cpp_ftoc(const char* str);
double c_ctof(const char* str);

int main(int argc, const char** argv)
{
	if (argc > 2 && argv[1] == std::string("--ftoc"))
	{
		double c=cpp_ftoc(argv[2]);
		std::cout << std::strtod(argv[2], NULL) << " degrees Farenheit is " << c << " degrees Celsius.\n";
	}
	if (argc > 2 && argv[1] == std::string("--ctof"))
	{
		double f = c_ctof(argv[2]);
		std::cout << strtod(argv[2], NULL) << " degrees Celsius is " << f << " degrees Farenheit.\n";
	}
	return 0;
}
double cpp_ftoc(const char* str)
{
	double f=std::strtod(str, NULL);
	return (f-32)*5/9;
}
double c_ctof(const char* str)
{
	double c=strtod(str, NULL);
	return (c * 9 / 5) + 32;
}