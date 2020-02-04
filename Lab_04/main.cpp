#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
	std::string line;
	int n;
	std::ifstream readFile ("text.txt");
	if (readFile.is_open())
	{
		while (std::getline(readFile,line))
		{
			std::cout << line << '\n';
		}
	}
	std::cout << "Enter a line of text.\n";
	std::getline(std::cin, line);
	std::cout << "Enter a number of times for that line to be appended: ";
	std::cin >> n;

	std::ofstream file;
	file.open("text.txt", std::ios_base::app);
	for (int i = 0; i < n; i++)
	{
		file << line << "\n";
	}
	file.close();
	return 0;
}