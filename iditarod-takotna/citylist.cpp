#include "citylist.h"
#include <fstream>

void CityList::addCities(std::string tspfile)
{
    std::string line;
    std::ifstream tsp(tspfile);
    bool reading = false;
    if (tsp.is_open())
    {
        while (getline(tsp, line))
        {
            if (line.substr(0, 1) == "1" || reading)
            {
                nodes.push_back(CityNode(line));
                reading = true;
            }
        }
        tsp.close();
    }
}
