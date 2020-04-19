#include <iostream>
#include <vector>
#include "citylist.h"
#include "citynode.h"
#include "citypath.h"
#include "tspsolver.h"

int main(int argc, char** argv)
{
	std::vector<std::string> TspFiles = { /*"pla85900.tsp",*/ "pr1002.tsp", /*"rl1889.tsp", "usa13509.tsp",*/ "vm1084.tsp"};
	TspSolver solver;
	for (std::string file : TspFiles)
	{
		std::cout << file << std::endl;
		CityList cities;
		if (!cities.addCities(file)) return -32;
		std::cout << "Solving Randomly: Best of 13\n";
		CityPath rpath = solver.SolveRandomly(cities, 13);
		for (int node : rpath.path())
		{
			std::cout << node << ", ";
		}
		std::cout << "\nSolving Greedy\n";
		CityPath gpath = solver.SolveGreedy(cities);
		for (int node : gpath.path())
		{
			std::cout << node << ", ";
		}
		std::cout << std::endl << std::endl;
	}
	return 0;
}