// Lab_StaticLibrary.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <string>
#include <sstream>
class Jumpsuit
{
private:
	int j_color;
	std::string owner;
public:
	Jumpsuit();
	Jumpsuit(int color);
	Jumpsuit(const Jumpsuit& jump);
	virtual ~Jumpsuit();
	void setColor(int color);
	void setOwner(std::string name);
	void getOwner(std::string& name);
	std::string properties();
};

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
	ss << "Owner is " << owner << "\nColor is 0x" << std::hex << j_color << std::endl;
	return ss.str();
}
Jumpsuit::~Jumpsuit()
{
}

int increase(int num)
{
	return num + 1;
}
int decrease(int num)
{
	return num - 1;
}