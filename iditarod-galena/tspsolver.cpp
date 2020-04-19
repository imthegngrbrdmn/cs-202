#include "tspsolver.h"
#include <limits>

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
		if (path.distance(cities) < minDist)
		{
			minDist = path.distance(cities);
			finalPath = path;
		}

	}
	return finalPath;
}

/*CityPath TspSolver::SolveGreedy(CityList& cities)
{
	CityPath path;
	for (int i = 1; i <= cities.numCities(); i++)
	{

	}
}*/