#include "stopwatch.h"
int main(int argc, char** argv)
{
	StopWatch watch=StopWatch();
	std::vector<std::string> titles={"alice.txt","cities.txt","eyre.txt","ion.txt","pride.txt","raven.txt"};
	std::string word;
	std::fstream book;
	std::vector<std::string> vectWords;
	std::list<std::string> listWords;
	std::string randWord;
	for(std::string title:titles)
	{
		book.open(title.c_str());
		while(book>>word)
		{
			vectWords.push_back(word);
		}
		auto randBookIndex = std::bind(std::uniform_int_distribution<int>(0, vectWords.size()-1), std::mt19937(time(0)));
		randWord = vectWords[randBookIndex()];
		watch.start();
		std::sort(vectWords.begin(), vectWords.end());
		std::cout << "It took " << watch.stop() << " seconds to sort the vector book." << std::endl;
		watch.start();
		std::find(vectWords.begin(), vectWords.end(), randWord);
		std::cout << "It took " << watch.stop() << " seconds to find " << randWord << " in the vector book." << std::endl;
		vectWords.clear();
		book.close();
		std::cout << "\n";
		book.open(title.c_str());
		while (book >> word)
		{
			listWords.push_back(word);
		}
		watch.start();
		listWords.sort();
		std::cout << "It took " << watch.stop() << " seconds to sort the list book." << std::endl;
		watch.start();
		std::find(listWords.begin(), listWords.end(), randWord);
		std::cout << "It took " << watch.stop() << " seconds to find "<<randWord<<" in the list book." << std::endl;
		listWords.clear();
		book.close();
		std::cout << "\n";

	}
}
