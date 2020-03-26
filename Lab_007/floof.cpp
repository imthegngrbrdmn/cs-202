#include "floof.h"

Floof::Floof()
{
}

Floof::~Floof()
{
}
void Floof::setFloofiness(int newFloof)
{
	floofiness = newFloof;
}
void Floof::setName(std::string newName)
{
	name = newName;
}
int Floof::getFloofiness() const
{
	return floofiness;
}
const std::string& Floof::getName() const
{
	return name;
}

Floof& Floof::operator=(Floof& other)
{
	floofiness = other.getFloofiness();
	name = other.getName();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Floof& floof)
{
	os << "Floofiness: " << floof.getFloofiness() << "\nName: " << floof.getName();
	return os;
}