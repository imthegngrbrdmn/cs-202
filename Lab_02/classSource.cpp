#include "header.h"

Jumpsuit::Jumpsuit()
{
	setColor(0xFF6600);
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
void Jumpsuit::setOwner(std::string name)
{
	owner = name;
}
void Jumpsuit::setColor(int color)
{
	j_color = color;
}
Jumpsuit::~Jumpsuit()
{
	delete &owner;
}