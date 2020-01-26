#include "stopwatch.h"
StopWatch::StopWatch()
{
	start();
	endTime = time(&endTime);
}
StopWatch::~StopWatch()
{

}
void StopWatch::start()
{
	time(&startTime);
}
double StopWatch::stop()
{
	time(&endTime);
}