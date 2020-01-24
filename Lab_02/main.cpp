#include "header.h"
int main(int* argc, char** argv)
{
	std::vector<Jumpsuit> suits;
	for (int i = 0; i < 5; i++)
	{
		suits.push_back(Jumpsuit());
	}
	for (Jumpsuit suit : suits)
	{
		std::cout << suit.properties() << std::endl;
	}
	return 0;
}