#define CATCH_CONFIG_MAIN
#include"value.h"
#include<list>
#include"../catch.hpp"
#include<iostream>

Value queue(std::list<Value> values, Value val)
{
	values.push_back(val);
	Value retVal = values.front();
	values.pop_front();
	return retVal;
}

Value stack(std::list<Value> values, Value val)
{
	values.push_back(val);
	Value retVal = values.back();
	values.pop_back();
	return retVal;
}

TEST_CASE("Queue is run", "[queue]")
{
	std::list<Value> values{ {5,"Five",'V'},{1,"One",'I'},{10,"Ten",'X'} };

	REQUIRE(queue(values, { 42,"TEST",'T' }) == Value({ 5,"Five",'V' }));
	REQUIRE(queue(values, { 0,"123",'\n' }) == Value({ 5,"Five",'V' }));
	REQUIRE(queue(values, { -7,"^%$@",'%' }) == Value({ 5,"Five",'V' }));
}
TEST_CASE("Stack is run", "[stack]")
{
	std::list<Value> values{ {5,"Five",'V'},{1,"One",'I'},{10,"Ten",'X'} };

	REQUIRE(stack(values, { 42,"TEST",'T' }) == Value({ 42, "TEST", 'T' }));
	REQUIRE(stack(values, { 0,"123",'\n' }) == Value({ 0, "123", '\n' }));
	REQUIRE(stack(values, { -7,"^%$@",'%' }) == Value({ -7, "^%$@", '%' }));
}