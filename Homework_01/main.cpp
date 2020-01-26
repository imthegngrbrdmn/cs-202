#include "stopwatch.h"

int main (int argc, char** argv)
{
	StopWatch watch=StopWatch();
	std::vector<int> nums;
	for(int i=0;i<100000;i++)
	{
		nums.push_back(i);
	}
	watch.start();
	std::search(nums.begin(),nums.end(),49998,49998);
	std::cout<<"It's been "<<watch.stop()<<" seconds for linear search."<<std::endl;
	watch.start();
	std::binary_search(nums.begin(),nums.end(),49998);
	std::cout<<"It's been "<<watch.stop()<<" seconds for binary search."<<std::endl;
}
