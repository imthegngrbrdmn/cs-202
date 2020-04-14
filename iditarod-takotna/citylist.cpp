#include "citylist.h"
#include <fstream>
#include <iostream>

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
                try
                {
                    nodes.push_back(CityNode(line));
                    reading = true;
                }
                catch (std::exception& e)
                {
                    if (std::string(e.what()) == std::string("EOF"))
                    {
                        break;
                    }
                    else
                    {
                        std::cout << "Caught an exception: " << e.what() << std::endl;
                    }
                }
            }
        }
        tsp.close();
    }
}

double CityList::distance(int first, int second)
{
    return sqrt(pow(nodes[first].graphx() - nodes[second].graphx(), 2) + pow(nodes[first].graphy() - nodes[second].graphy(), 2));
}
