#include "tspsolver.h"

using Random = effolkronium::random_static;

CityPath TspSolver::SolveRandomly(CityList& cities)
{
	CityPath path;
	std::vector<int> randomlist;
	for (int i = 0; i < cities.numCities(); i++)
	{
		randomlist.push_back(i);
	}
	while (randomlist.size()>0)
	{
		Random::shuffle(randomlist);
		path.addToPath(randomlist.back);
		randomlist.pop_back;
	}
	return path;
}