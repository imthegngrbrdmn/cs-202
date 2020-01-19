#include <iostream>
#include <cstdlib>
double cpp_ftoc(const char* str);
double c_ctof(const char* str);

int main(int argc, const char** argv)
{
	char* pEnd;
	if (argc > 2 && argv[1] == std::string("--ftoc"))
	{
		cpp_ftoc(argv[3]);
	}
	if (argc > 2 && argv[1] == std::string("--ctof"))
	{
		double f = c_ctof(argv[2]);
		std::cout << strtod(argv[2],&pEnd) << " degrees Celsius is " << f << " degrees Farenheit.\n";
	}
	return 0;
}
double cpp_ftoc(const char* str)
{
	std::cout << "ftoc";
	return 0;
}
double c_ctof(const char* str)
{
	char* pEnd;
	double c=strtod(str, &pEnd);
	return (c * 9 / 5) + 32;
}