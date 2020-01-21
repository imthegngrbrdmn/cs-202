#include "header.h"
int main()
{
	std::string name;
	std::cout << "Hello! What is your name?\n";
	name = getName();
	if (name == "Jumpsuit")
	{
		std::cout << "Your name, not what you're wearing!\nNow I'll just have to call you jumpsuit.\n";
	}
	else
	{
		std::cout << "Hello " << name << ".\n";
	}
	dragonCombat();
	std::cout << "\nWritten Numbers:\n";
	std::vector<std::string>numbers = { "Five","Four","Three","Two","One" };
	for (std::string num : numbers)
	{
		std::cout << num << std::endl;
	}
	std::cout << "\nDecimal Numbers:\n";
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << i << std::endl;
	}
	std::cout << "\n";
	do 
	{
		std::cout << "Input Jumpsuit\n";
		std::cin >> name;
	} while (name != "Jumpsuit");
	return 0;
}