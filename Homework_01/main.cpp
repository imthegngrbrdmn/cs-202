#include "stopwatch.h"

int main (int argc, char** argv)
{
	StopWatch watch=StopWatch();
	std::vector<int> nums;
	std::mt19937 mt_rand(time(0));
	for(int i=0;i<1000;i++)
	{
		nums.push_back(mt_rand());
	}
	int needle[] = { 999 };
	watch.start();
	std::random_shuffle(nums.begin(), nums.end());
	std::cout << "It took " << watch.stop() << " seconds to randomly arrange the vector" << std::endl;
	watch.start();
	std::sort(nums.begin(), nums.end());
	std::cout << "It took " << watch.stop() << " seconds to sort the vector" << std::endl;
	watch.start();
	std::search(nums.begin(), nums.end(), needle, needle + 1);
	std::cout << "It took " << watch.stop() << " seconds for linear search." << std::endl;
	watch.start();
	std::binary_search(nums.begin(), nums.end(), needle[0]);
	std::cout << "It took " << watch.stop() << " seconds for binary search." << std::endl;
}
