#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <chrono>
#include <iostream>
#include <ctime>

class StopWatch
{
public:
	StopWatch();
	void start();
	double stop();
	~StopWatch();

private:
	std::time_t startTime;
	std::time_t endTime;
};
#endif
