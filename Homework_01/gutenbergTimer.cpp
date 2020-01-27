#include "stopwatch.h"
int main(int argc, char** argv)
{
	StopWatch watch=StopWatch();
	std::vector<std::string> titles={"alice.txt","cities.txt","eyre.txt","ion.txt","pride.txt","raven.txt"};
	std::string line;
	fstream book;
	for(std::string title:titles)
	{
		std::vector<std::string> words;
		book.open(title.c_str());
		while(file>>word)
		{
			words.push_back(word);
		}
	}
}
