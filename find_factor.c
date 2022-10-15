#include <stdio.h>

int smallest_divisor(long int n)
{
	if (n % 2 == 0)
	{
		return 2;
	}
	int f = 3;
	while (((4+f) * (f+4)) <= n)
	{
		f = f + 4;
		if (n%(f - 2) == 0)
		{
			return f - 2;
		}
		if (n%((f - 4)) == 0)
		{
			return f - 4;
		}
		if (n%f == 0)
		{
			return f;
		}
		if (n%(f + 2) == 0)
		{
			return f + 2;
		}
		if (n%(f+4) == 0)
		{
			return f + 4;
		}
		else
		{
		f += 2;
		}
	}
	return 1;
}
