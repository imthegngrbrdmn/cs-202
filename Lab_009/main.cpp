#include <iostream>
#include <iomanip>
#include <string>

void callCounter()
{
	static int count = 0;
	if (!count)
	{
		std::cout << __FUNCTION__ << " has not been called before\n";
	}
	else
	{
		std::cout << __FUNCTION__ << " has been called " << count << " times\n";
	}
	count++;
}

int main(int argc, char** argv)
{
	for (int i = 0; i < 10; i++)
	{
		callCounter();
	}
	return 0;
}