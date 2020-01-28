#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <vector>
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
	std::unique_ptr<Jumpsuit> suitMaker(const std::string name, const int color);
};

#endif
