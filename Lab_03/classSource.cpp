#include "header.h"

Jumpsuit::Jumpsuit()
{
	setColor(0xFF6600);
	setOwner("Default");
}
Jumpsuit::Jumpsuit(int color)
{
	setColor(color);
	setOwner("Default");
}
Jumpsuit::Jumpsuit(const Jumpsuit& jump)
{
	setColor(jump.j_color);
	setOwner(jump.owner);
}
void Jumpsuit::getOwner(std::string& name)
{
	name = owner;
}
void Jumpsuit::setOwner(std::string name)
{
	owner = name;
}
void Jumpsuit::setColor(int color)
{
	j_color = color;
}
std::string Jumpsuit::properties()
{
	std::stringstream ss;
	ss << "\nOwner is " << owner << "\nColor is 0x" << std::hex << j_color << std::endl;
	return ss.str();
}
Jumpsuit::~Jumpsuit()
{}