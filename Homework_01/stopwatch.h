#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <chrono>
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <random>

class StopWatch
{
public:
	StopWatch();
	void start();
	double stop();
	~StopWatch();

private:
	std::chrono::system_clock::time_point startTime;
	std::chrono::system_clock::time_point endTime;
};
#endif