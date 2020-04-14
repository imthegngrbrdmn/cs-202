#include "citylist.h"
#include <iostream>

int main(int argc, char** argv)
{
	CityList cities;
	cities.addCities("usa13509.tsp");
	std::cout << "Distance of 0 & 7: " << cities.distance(0, 7) << std::endl;
	return 0;
}