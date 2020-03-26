#ifndef FLOOF_H
#define FLOOF_H
#include <string>
#include <iostream>
class Floof
{
public:
	Floof();
	~Floof();
	void setFloofiness(int newFloof);
	void setName(std::string newName);
	int getFloofiness() const;
	const std::string& getName() const;
	Floof& operator=(Floof& other);
private:
	int floofiness{ 100 };
	std::string name{ "Floof" };
};

std::ostream& operator<<(std::ostream& os, const Floof& floof);

#endif