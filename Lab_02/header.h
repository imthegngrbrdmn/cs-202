#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

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
	std::string properties
};

#endif
