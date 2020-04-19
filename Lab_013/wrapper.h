#ifndef WRAPPER_H
#define WRAPPER_H

#include <iostream>
#include <string>

template <typename WrapType>

class Wrapper
{
public:
	Wrapper(const WrapType & obj) : obj_(obj)
	{
	}
	
	~Wrapper()
	{
	}

private:
	WrapType obj_;

	template <typename T>
	friend std::ostream& operator<<(std::ostream& os, const Wrapper<T>& w);
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Wrapper<T>& w)
{
	os << w.obj_;
	return os;
}


#endif