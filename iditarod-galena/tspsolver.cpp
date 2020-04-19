#include "tspsolver.h"
#include <limits>
#include <random>
#include <chrono>
#include <iostream>
#include <list>

using Random = effolkronium::random_static;

CityPath TspSolver::SolveRandomly(CityList& cities, int times)
{
	double minDist = std::numeric_limits<double>::max();
	CityPath finalPath;

	for (int m = 0; m < times; m++)
	{
		std::vector<int> randomlist = {};
		for (int i = 0; i < cities.numCities(); i++)
		{
			randomlist.push_back(i);
		}
		CityPath path;
		while (randomlist.size() > 0)
		{
			Random::shuffle(randomlist);
			path.addToPath(randomlist.back());
			randomlist.pop_back();
		}
		path.addToPath(path.front());
		if (path.distance(cities) < minDist)
		{
			minDist = path.distance(cities);
			finalPath = path;
		}
	}
	return finalPath;
}

CityPath TspSolver::SolveGreedy(CityList& cities)
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::mt19937 generator(seed);
	CityPath path;
	double minDist;
	int start = 1 + generator()&(int)(cities.numCities());
	std::vector<int> usedNodes;
	path.addToPath(start);
	while (usedNodes.size()<cities.numCities())
	{
		int node=0;
		minDist = std::numeric_limits<double>::max();
		for (int i = 1; i < cities.numCities(); i++)
		{
			if (cities.distance(path.path().back(), i)<=minDist)
			{
				bool used=false;
				for (int j : usedNodes)
				{
					if (i == j)
					{
						used = true;
						break;
					}
				}
				if (!used)
				{
					node = i;
				}
			}
		}
		path.addToPath(node);
		usedNodes.push_back(node);
	}
	path.addToPath(start);
	return path;
}

CityPath TspSolver::SolveMyWay(CityList& cities)
{
	CityPath path;
	std::list<int> randomlist;
	for (double i = 1; i <= cities.numCities(); i++)
	{
		randomlist.push_back(i);
	}
	bool even = true;
	while (randomlist.size() > 0)
	{
		
		if (even)
		{
			path.addToPath(randomlist.front());
			randomlist.pop_front();
			even = false;
		}
		else
		{
			path.addToPath(randomlist.back());
			randomlist.pop_back();
			even = true;
		}
	}
	return path;
}