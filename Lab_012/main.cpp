#include <iostream>
#include <string>

//	[x]	Write Base class with two methods (one virtual)
//	[x]	Write Derived Class with two methods (one virtual)
//	[x]	Test base class pointer to base class object
//	[x]	Test base class pointer to derived class object
//	[x]	Test derived class pointer to derived class object
//	[x] 	Test base class reference to base class object
//	[x]	Test bass class reference to derived class object
//	[x]	Test derived class reference to derived class object

class Sandwich
{
public:
	Sandwich(){std::cout<<"Sandwich constructor\n";}
	virtual ~Sandwich(){std::cout<<"Sandwich destructor\n";}
	void eat(){std::cout<<"Sandwich eat() --non-virtual\n";}
	virtual void cook(){std::cout<<"Sandwich make() --virtual\n";}
};

class GrilledCheese : public Sandwich 
{
public:
	GrilledCheese(){std::cout<<"GrilledCheese constructor\n";}
	~GrilledCheese(){std::cout<<"GrilledCheese destructor\n";}
	void eat(){std::cout<<"GrilledCheese eat() --non-virtual\n";}
	void cook() override {std::cout<<"GrilledCheese make() --virtual\n";}
};

void dnl()
{
	std::cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
}

void testSandwichPointer()
{
	Sandwich s;
	Sandwich* ps = &s;
	ps->cook();
	ps->eat();
	
	GrilledCheese gc;
	Sandwich* ps2 = &gc;
	ps2->cook();
	ps2->eat();
	
	GrilledCheese* pgc = &gc;
	pgc->cook();
	pgc->eat();
	
}

void testSandwichReferences()
{
	Sandwich s;
	{
		Sandwich& ss = s;
		ss.cook();
		ss.eat();
	}
	GrilledCheese gc;
	{
		Sandwich& ss = gc;
		ss.cook();
		ss.eat();
	}
	{
		GrilledCheese& ggcc = gc;
		ggcc.cook();
		ggcc.eat();
	}
}

int main(int argc, char** argv)
{
	Sandwich sw0;
	dnl();
	GrilledCheese gc0;
	gc0.cook();
	gc0.eat();
	dnl();
	testSandwichPointer();
	dnl();
	testSandwichReferences;
	return 0;
}
