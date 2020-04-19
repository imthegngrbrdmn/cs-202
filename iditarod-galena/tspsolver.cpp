#include "tspsolver.h"
#include <limits>
#include <random>
#include <chrono>

using Random = effolkronium::random_static;

CityPath TspSolver::SolveRandomly(CityList& cities, int times)
{
	double minDist = std::numeric_limits<double>::max();
	CityPath path;
	CityPath finalPath;
	std::vector<int> randomlist;
	for (int m = 0; m < times; m++)
	{
		for (int i = 0; i < cities.numCities(); i++)
		{
			randomlist.push_back(i);
		}
		while (randomlist.size() > 0)
		{
			Random::shuffle(randomlist);
			path.addToPath(randomlist.back());
			randomlist.pop_back();
		}
		path.addToPath(path.path().front());
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
	int start = generator()&cities.numCities();
	std::vector<int> usedNodes;
	path.addToPath(start);
	while (usedNodes.size()<cities.numCities())
	{
		int node;
		minDist = std::numeric_limits<double>::max();
		for (int i = 1; i <= cities.numCities(); i++)
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
	}
	path.addToPath(start);
	return path;
}