#include "header.h"
int main(int argc, char** argv)
{
	std::vector<Jumpsuit> suits;
	for (int i = 0; i < 5; i++)
	{
		suits.push_back(Jumpsuit());
	}
	for (Jumpsuit suit : suits)
	{
		std::cout << "This is a jumpsuit with properites" << suit.properties() << std::endl;
	}
	Jumpsuit green = Jumpsuit(0x00FF00);
	green.setOwner("Millard");
	std::cout << "This is jumpsuit green \n" << green.properties() << std::endl;
	Jumpsuit green2 = Jumpsuit(green);
	std::cout << "This is jumpsuit green2\n" << green2.properties() << std::endl;

	return 0;
}
