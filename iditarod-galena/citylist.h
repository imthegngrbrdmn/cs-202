#ifndef CITYLIST_H
#define CITYLIST_H

#include "citynode.h"
#include <vector>
#include <string>
#include <cmath>

class CityList
{
public:
	CityList()	{}
	~CityList() {}
	void addCities(std::string tspfile);
	double distance(int first, int second);
private:
	std::vector<CityNode> nodes;
};
#endif