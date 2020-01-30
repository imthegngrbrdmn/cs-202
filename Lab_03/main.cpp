#include "header.h"

int main(int argc, char** argv)
{
	Jumpsuit* jumpPtr = new Jumpsuit();
	std::cout << "Made Jumpsuit* jumpPtr pointing to a Jumpsuit: " << jumpPtr << std::endl;
	std::unique_ptr<Jumpsuit> five=std::make_unique<Jumpsuit>();
	std::cout << "Made unique_ptr<Jumpsuit> five pointing to a Jumpsuit: " << five << std::endl;
	std::unique_ptr<Jumpsuit> newFive = std::move(five);
	std::cout << "Made unique_ptr<Jumpsuit> newFive which moved five: " << newFive << std::endl;
	std::cout << "Properties of newFive's Jumpsuit are: " << newFive->properties() << std::endl;
	std::shared_ptr<Jumpsuit> hiFive = std::make_shared<Jumpsuit>(*jumpPtr);
	std::cout << "Made shared_ptr<Jumpsuit> hiFive which made a shared pointer to the first Jumpsuit: " << hiFive << std::endl;
	std::shared_ptr<Jumpsuit> loFive = std::make_shared<Jumpsuit>(*jumpPtr);
	std::cout << "Made shared_ptr<Jumpsuit> loFive which made a shared pointer to the first Jumpsuit: " << loFive << std::endl;
	delete jumpPtr;
}