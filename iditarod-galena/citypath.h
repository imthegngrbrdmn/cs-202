#ifndef CITYPATH_H
#define CITYPATH_H
#include "citylist.h"
#include <vector>
#include <iostream>
class CityPath
{
public:
	CityPath()	{};
	~CityPath() {};
	void addToPath(int node)	{ path_.push_back(node); }
	std::vector<int> path()		{ return path_; }
	double distance(CityList& cities)
	{
		double distance = 0;
		if (cities.numCities() != path_.size() - 1)
		{
			return -7;
		}
		for (int i = 0; i < path_.size()-1; i++)
		{
			distance += cities.distance(path_[i], path_[i + 1]);
		}
		return distance;
	}
	int front()				{ return path_.front(); }
private:
	std::vector<int> path_;
};

#endif