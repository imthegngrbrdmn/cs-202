#include "names.h"
#include <iostream>

namespace maine
{
	void foo()
	{
		std::cout << "Hello from maine::foo!\n";
	}
}

int main(int argc, char** argv)
{
	std::cout << "Calling maine::foo.\t";
	maine::foo();
	std::cout << "\nCalling names::foo.\t";
	names::foo();
	return 0;
}