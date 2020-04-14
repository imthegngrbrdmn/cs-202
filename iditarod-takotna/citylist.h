#ifndef CITYLIST_H
#define CITYLIST_H

#include "citynode.h"
#include <vector>
#include <string>

class CityList
{
public:
	CityList()	{}
	~CityList() {}
	void addCities(std::string tspfile);
private:
	std::vector<CityNode> nodes;
};
#endif