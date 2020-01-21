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
	std::cout << "\nA dragon in a jumpsuit is charging up his breath, what do you do?\n(1) Stab him with your sword\n(2) Run!!!!!!\n(3) Chill, your jumpsuit will save you! Right?\n";
	int choice = 0;
	std::cin >> choice;
	switch (choice)
	{
	case 1: 
	{
		std::cout << "You attempt to stab, but your sword breaks. Then the dragon eats you,\nbut he spits your jumpsuit back out because it is disgusting from all your sweat.\nYou should really wash that!\n";
		break;
	}
	case 2:
	{
		std::cout << "You run, but then you run off a cliff & your jumpsuit has to deploy a parachute to save you.\n";
		break;
	}
	case 3: 
	{
		std::cout << "You chill in your jumpsuit. Surprisingly, the dragon was just taking a deep breath.\nThen you start talking about your jumpsuits.\n";
		break;
	}
	default:
	{
		std::cout << "That's not an option, but I guess you just don't get an ending.\n";
		break;
	}
	}
}