#include <iostream>
#include <string>

class Base
{
public:
	Base()
	{
		std::cout<<"Constructing a default Base object. Initial number is "<<num_<<std::endl;
	}
	Base(int value)
	:num_(value)
	{
		std::cout<<"Constructing a Base object with number "<<num_<<std::endl;
	}
	~Base()
	{
		std::cout<<"Destructing a Base object with number "<<num_<<std::endl;
	}
private:
	int num_{42};
};

class Derived : public Base
{
public:
	Derived()
	: Base(56), name_("Cori")
	{
		std::cout<<"Constructing a derived object, name is "<<name_<<std::endl;
	}
	Derived(int num, std::string name)
	:Base(num),name_(name)
	{
		std::cout<<"Constructing a derived object, name is "<<name_<<std::endl;
	}
	~Derived()
	{
		std::cout<<"Deconstructing a derived object, name is "<<name_<<std::endl;
	}
private:
	std::string name_;
};
int main(int argc, char** argv)
{
	Base b0;
	Base b1(18);
	Derived d0;
	Derived d2(21,"Some Guy");
	return 0;
}
