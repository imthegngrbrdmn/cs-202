#include "citynode.h"
#include <iostream>

CityNode::CityNode(std::string &information)
{
	int space1 = information.find(" ");
	int space2 = information.find(" ", space1+1);
	if (space1 == -1 || space2 == -1)
	{
		throw std::runtime_error("EOF");
	}
	number_ = std::stod(information.substr(0, space1));
	latitude_ = std::stod(information.substr(space1+1, space2));
	graphy_ = latitude_;
	longitude_ = std::stod(information.substr(space2+1));
	graphx_ = longitude_;
}
