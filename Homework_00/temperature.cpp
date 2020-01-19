#include <iostream>
#include <cstdlib>
#include <limits>
double cpp_ftoc(const char* str);
double c_ctof(const char* str);

int main(int argc, const char** argv)
{
	//Handle large & small exceptions
	if (strtod(argv[2], NULL) > std::numeric_limits<double>::max())
	{
		std::cout << "ERROR: Number too large\n";
		return 0;
	}
	if (strtod(argv[2], NULL) < std::numeric_limits<double>::lowest())
	{
		std::cout << "ERROR: Number too small\n";
		return 0;
	}

	//Handle non-numerical input
	if (strtod(argv[2], NULL) == 0 && argv[2] != std::string("0"))
	{
		std::cout << "ERROR: Non-numerical input\n";
		return 0;
	}

	if (argc > 2 && argv[1] == std::string("--ftoc"))
	{
		double c=cpp_ftoc(argv[2]);
		
		std::cout << std::strtod(argv[2], NULL) << " degrees Farenheit is " << c << " degrees Celsius.\n";
	} 
	else if (argc > 2 && argv[1] == std::string("--ctof"))
	{
		double f = c_ctof(argv[2]);
		std::cout << strtod(argv[2], NULL) << " degrees Celsius is " << f << " degrees Farenheit.\n";
	}
	else
	{
		std::cout << "ERROR: Invalid function call.\n";
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