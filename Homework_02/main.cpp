#define CATCH_CONFIG_MAIN
#include"value.h"
#include<list>
#include"../catch.hpp"
#include<iostream>

Value queue(std::list<Value> values, Value val)
{
	std::cout << "Initial Queue\n";
	for (Value value : values)
	{
		std::cout << value;
	}
	values.push_back(val);
	Value retVal = values.front();
	values.pop_front();
	std::cout << "Final Queue\n";
	for (Value value : values)
	{
		std::cout << value;
	}
	return retVal;
}
Value stack(std::list<Value> values, Value val)
{
	std::cout << "Initial Stack\n";
	for (Value value : values)
	{
		std::cout << value;
	}
	values.push_back(val);
	Value retVal = values.back();
	values.pop_back();
	std::cout << "Final Stack\n";
	for (Value value : values)
	{
		std::cout << value;
	}
	return retVal;
}
bool sortAndInsert(std::list<Value> values, Value find, Value insert)
{
	std::cout << "Initial List to be sorted\n";
	for (Value value : values)
	{
		std::cout << value;
	}
	values.push_back(insert);
	values.sort();
	std::cout << "Final Sorted List\n";
	for (Value value : values)
	{
		std::cout << value;
	}
	for (Value val : values)
	{
		if (val == find) return true;
	}
	return false;
}

TEST_CASE("Queue is run", "[queue]")
{
	std::list<Value> values{ {5,"Five",'V'},{1,"One",'I'},{10,"Ten",'X'} };

	REQUIRE(queue(values, { 42,"TEST",'T' }) == Value({ 5,"Five",'V' }));
	std::cout << "\n";
	REQUIRE(queue(values, { 0,"123",'\n' }) == Value({ 5,"Five",'V' }));
	std::cout << "\n";
	REQUIRE(queue(values, { -7,"^%$@",'%' }) == Value({ 5,"Five",'V' }));
	std::cout << "\n";
}
TEST_CASE("Stack is run", "[stack]")
{
	std::list<Value> values{ {5,"Five",'V'},{1,"One",'I'},{10,"Ten",'X'} };

	REQUIRE(stack(values, { 42,"TEST",'T' }) == Value({ 42, "TEST", 'T' }));
	std::cout << "\n"; 
	REQUIRE(stack(values, { 0,"123",'\n' }) == Value({ 0, "123", '\n' }));
	std::cout << "\n"; 
	REQUIRE(stack(values, { -7,"^%$@",'%' }) == Value({ -7, "^%$@", '%' }));
	std::cout << "\n";
}
TEST_CASE("sortAndInsert is run", "[stack]")
{
	std::list<Value> values{ {5,"Five",'V'},{1,"One",'I'},{10,"Ten",'X'} };

	REQUIRE(sortAndInsert(values, { 42,"TEST",'T' }, { 42,"TEST",'T' }) == true);
	std::cout << "\n"; 
	REQUIRE(sortAndInsert(values, { 0,"123",'\n' }, { 42,"TEST",'T' }) == false);
	std::cout << "\n"; 
	REQUIRE(sortAndInsert(values, { 42,"TEST",'T' }, { 0,"123",'\n' }) == false);
	std::cout << "\n";
}