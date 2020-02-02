#ifndef VALUE_H
#define VALUE_H

#include <string>
#include <iostream>

struct Value
{
	int integer;
	std::string text;
	char character;
	bool operator<(const Value& a) const
	{
		return a.character < character;
	}
	bool operator>(const Value& a) const
	{
		return a.character > character;
	}
	bool operator==(const Value& a) const
	{
		return (a.character == character && a.integer == integer && a.text == text);
	}
	
};
std::ostream& operator<<(std::ostream& os, const Value& val)
{
	return os<<val.character<<"\t"<<val.integer<<"\t"<<val.text<<"\n";
}
#endif
