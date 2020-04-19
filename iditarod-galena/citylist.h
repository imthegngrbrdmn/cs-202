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
	bool addCities(std::string tspfile);
	double distance(int first, int second);
	double numCities() { return (double)nodes.size(); }
private:
	std::vector<CityNode> nodes;
};
#endif