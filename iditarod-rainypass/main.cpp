#include "ackermann.h"
#include <iostream>

int main(int argc, char** argv)
{
	std::cout << "ack(1, 1)\t"<<ack(1,1)<<std::endl;
	std::cout << "ack(3, 5)\t"<<ack(3,5)<<std::endl;
	return 0;
}