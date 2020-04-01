#include "ackermann.h"
#include "../stopwatch.h"
#include <iostream>

int main(int argc, char** argv)
{
	int m = 3, n = 9;	//m<4	n<10
	StopWatch watch;
	double time;
	int result;
	watch.start();
	result = ack(m, n);
	time = watch.stop();
	std::cout << "ack("<<m<<","<<n<<"):\t" << result << "\nTook:\t" << time << " seconds";
	return 0;
}