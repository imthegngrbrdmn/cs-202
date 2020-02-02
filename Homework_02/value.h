#ifndef VALUE_H
#define VALUE_H

#include <string>

struct Value
{
	int integer;
	std::string text;
	char character;
	bool operator==(const Value& a) const
	{
		return (a.character == character && a.integer == integer && a.text == text);
	}
};

#endif
