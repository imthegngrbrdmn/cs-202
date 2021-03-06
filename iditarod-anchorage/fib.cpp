#include "fib.h"

int fib_loop(int n)
{
	int n2 = 1;
	int n1 = 0;
	int sum = 0;
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	for (int i = 2; i <= n; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	return sum;
}

int fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else if (n > 1)
	{
		return fib(n - 1) + fib(n - 2);
	}
}
