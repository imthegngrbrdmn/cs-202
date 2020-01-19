#include <iostream>
#include <cstdlib>
double cpp_ftoc(const char* str);
double c_ctof(const char* str);

int main(int argc, const char** argv)
{
	if (argc > 2 && argv[1] == std::string("--ftoc"))
	{
		cpp_ftoc(argv[3]);
	}
	if (argc > 2 && argv[1] == std::string("--ctof"))
	{
		c_ctof(argv[3]);
	}
}
double cpp_ftoc(const char* str)
{
	std::cout << "ftoc";
	return 0;
}
double c_ctof(const char* str)
{
	std::cout << "ctof";
	return 0;
}