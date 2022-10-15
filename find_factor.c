#include <stdio.h>

int smallest_divisor(long int n)
{
	if (n % 2 == 0)
	{
		return 2;
	}
	int f = 3;
	while (((2+f) * (f+2)) <= n)
	{
		f = f + 2;
		if (n%(f - 2) == 0)
		{
			return f - 2;
		}
		if (n%f == 0)
		{
			return f;
		}
		if (n%(f + 2) == 0)
		{
			return f + 2;
		}
		else
		{
		f += 2;
		}
	}
	if (n < 25)
	{
		if (n % 3 == 0)
		{
			return 3;
		}
		return 1;
	}

}
