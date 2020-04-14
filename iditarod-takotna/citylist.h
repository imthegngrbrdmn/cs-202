#ifndef CITYLIST_H
#define CITYLIST_H

#include "citynode.h"
#include <vector>
class CityList
{
public:
	CityList();
	CityList~();

private:
	std::vector<CityNode> citynodes;
};
#endif