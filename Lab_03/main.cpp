#include "header.h"

int main(int argc, char** argv)
{
	Jumpsuit* jumpPtr = new Jumpsuit();
	std::cout << "Made int* intPtr pointing to a 5: " << jumpPtr << std::endl;
	std::unique_ptr<Jumpsuit> five=std::make_unique<Jumpsuit>();
	std::cout << "Made unique_ptr<Jumpsuit> five pointing to a Jumpsuit: " << five << std::endl;
	std::unique_ptr<Jumpsuit> newFive = std::move(five);
	std::cout << "Made unique_ptr<Jumpsuit> newFive which moved five: " << newFive << std::endl;

	delete jumpPtr;
}