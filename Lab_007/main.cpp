#include <iostream>
#include "floof.h"

int main(int argc, char** argv)
{
	const Floof floof1;
	std::cout << floof1 << std::endl;
	Floof floof2;
	floof2.setFloofiness(1000000);
	floof2.setName("Flooficorn");
	std::cout << floof2 << std::endl;
	Floof floof3;
	//floof3 = floof2;
	std::cout << floof3 << std::endl;
	return 0;
}