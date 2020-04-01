#include "ackermann.h"
#include "../stopwatch.h"
#include <iostream>

int main(int argc, char** argv)
{
	int m = 3, n = 1;
	StopWatch watch;
	double time;
	int result;
	watch.start();
	result = ack(m, n);
	time = watch.stop();
	std::cout << "ack("<<m<<","<<n<<"):\t" << result << "\nTook:\t" << time << " seconds";
	return 0;
}