#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char** argv)
{
	std::streampos size;
	char* memblock;
	std::fstream file;
	std::vector<int>nums;
	int sum = 0;
	file.open("data.dat", std::ios::in | std::ios::binary | std::ios::ate);
	if (file.is_open())
	{
		size = file.tellg();
		memblock = new char[size];
		file.seekg(0, std::ios::beg);
		file.read(memblock, size);
		file.close();
		for (int i = 0; i < size; i++)
		{
			if ((int)memblock[i] != 0)
			{
				nums.push_back((int)memblock[i]);
			}
		}
	}
	for (int num : nums)
	{
		sum += num;
	}
	std::cout << "There are " << nums.size()
		<< " integers.\nThey sum to " << sum
		<< ".\nThe average is " << (sum / (double)nums.size()) << std::endl;
	return 0;
}