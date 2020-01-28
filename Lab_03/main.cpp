#include<iostream>
#include<string>
int main(int argc, char** argv)
{
	int* intPtr = new int(5);
	std::cout << "Made int* intPtr pointing to a 5: " << intPtr << std::endl;
	std::unique_ptr<int> five=std::make_unique<int>(5);
	std::cout << "Made unique_ptr<int> five pointing to a 5: " << five << std::endl;
	std::unique_ptr<int> newFive = std::move(five);
	std::cout << "Made unique_ptr<int> newFive which moved five: " << newFive << std::endl;
	delete intPtr;
}