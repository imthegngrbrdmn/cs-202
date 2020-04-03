#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

static int test_count = 0;
class Test
{
public:
	Test()
		:intstanceNum_(test_count)
	{
		std::cout << __FUNCTION__ << " " << intstanceNum_ << " init\n";
		test_count++;
		std::ostringstream os;
		os << __FUNCTION__ <<" "<< intstanceNum_;
		className_ = os.str();
	}
	virtual ~Test()
	{
		std::cout << __FUNCTION__ << " destroyed\n";
	}
	void printClassName()
	{
		std::cout << className_ << std::endl;
	}
private:
	int intstanceNum_;
	static std::string className_;
};
namespace
{
	Test t1;
	Test t2;
}
std::string Test::className_{ "test" };

void callCounter()
{
	Test t0;
	static int count = 0;
	if (!count)
	{
		std::cout << __FUNCTION__ << " has not been called before\n";
	}
	else
	{
		std::cout << __FUNCTION__ << " has been called " << count << " times\n";
	}
	count++;
	t0.printClassName();
	
}

int main(int argc, char** argv)
{
	std::cout << "Begin Main\n";
	t1.printClassName();
	t2.printClassName();
	for (int i = 0; i < 10; i++)
	{
		callCounter();
	}
	t1.printClassName();
	return 0;
}