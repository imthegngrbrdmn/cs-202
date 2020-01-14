#include"header.h"
std::string getName()
{
	std::string name;
	std::getline(std::cin, name);
	while (name.length() < 3)
	{
		std::cout << "That's too short to really be your name!\n";
		std::getline(std::cin, name);
	}
	return name;
}
void dragonCombat()
{
	std::cout << "\tA dragon is charging up his breath, what do you do?\n(1) Stab him with your sword\n(2) Run!!!!!!\n(3) Die\n";
	int choice = 0;
	std::cin >> choice;
	switch (choice)
	{
	case 1: std::cout << "You attempt to stab, but your sword breaks. Then the dragon eats you.\n:(\n";
		break;
	case 2: std::cout << "You run, but then you run off a cliff & die.\n:(\n";
		break;
	case 3: std::cout << "You attempt to die, but you live instead. The dragon was just taking a deep breath.\n:(\n";
		break;
	default:
		std::cout << "Did I say that was an option??!!\nInput something real.\n";
		std::cin >> choice;
	}
}