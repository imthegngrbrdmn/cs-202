#include "..//catch.hpp"
#include <iostream>

char* to_lower(char* str)
{
	int memSize = sizeof(str);
	char* s = (char*)malloc(memSize);
	std::cout << "\nInput string:\t" << str << "\n";
	int i=0;
	while (true)
	{
		s[i] = str[i];
		if (s[i] >= 0x41 && s[i] <= 0x5A)
		{
			s[i] += 0x20;
		}
		else if (s[i] == NULL)
		{
			break;
		}
		i++;
	}
	std::cout << s << "\n";
	return s;
	free(s);
}