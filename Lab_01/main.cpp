#include "header.h"
int main()
{
	std::string name;
	std::cout << "Hello! What is your name?\n";
	name = getName();
	if (name == "Millard")
	{
		std::cout << "Wazzup " << name << "?\n";
	}
	else
	{
		std::cout << "Hello " << name << ".\n";
	}
	dragonCombat();
	std::vector<std::string>numbers = { "Five","Four","Three","Two","One" };
	for (std::string num : numbers)
	{
		std::cout << num << std::endl;
	}
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << i << std::endl;
	}
	do 
	{
		std::cout << "Input Millard\n";
		std::cin >> name;
	} while (name != "Millard");
	return 0;
}