#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char** argv)
{
	std::streampos size;
	char* memblock;
	std::ifstream file("data.dat", std::ios::in | std::ios::binary | std::ios::ate);
	if (file.is_open())
	{
		size = file.tellg();
		memblock = new char[size];
		file.seekg(0, std::ios::beg);
		file.read(memblock, size);
		file.close();
		std::cout << memblock;
		delete[] memblock;
	}
	return 0;
}