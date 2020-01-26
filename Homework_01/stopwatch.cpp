#include "stopwatch.h"
StopWatch::StopWatch()
{
	start();
	endTime=std::chrono::system_clock::now();
}
StopWatch::~StopWatch()
{

}
void StopWatch::start()
{
	startTime=std::chrono::system_clock::now();
}
double StopWatch::stop()
{
	endTime=std::chrono::system_clock::now();
	return std::chrono::duration_cast<std::chrono::milliseconds>(endTime-startTime).count()/100.0;
}
