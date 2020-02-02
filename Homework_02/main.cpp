#define CATCH_CONFIG_MAIN
#include"value.h"
#include<list>
#include"../catch.hpp"
#include<iostream>

Value queue(Value val)
{
	std::list<Value> values{ {5,"Five",'V'},{1,"One",'I'},{10,"Ten",'X'} };
	values.push_back(val);
	Value retVal = values.back();
	values.pop_back();
	return retVal;
}
TEST_CASE("Queue is run", "[queue]")
{
	REQUIRE(queue({ 42,"TEST",'T' }) == Value({ 42, "TEST", 'T' }));
	REQUIRE(queue({ 0,"123",'\n' }) == Value({ 0, "123", '\n' }));
	REQUIRE(queue({ -7,"^%$@",'%' }) == Value({ -7, "^%$@", '%' }));
}