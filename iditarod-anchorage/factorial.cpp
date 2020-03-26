int factorial_loop(int n)
{
	int result = 1;
	while (n>0)
	{
		result *= n;
		n--;
	}
	return result;
}

int factorial(int n)
{
	if (n > 0)
	{
		return n * factorial(n - 1);
	}
	else if (n == 0)
	{
		return 1;
	}
}