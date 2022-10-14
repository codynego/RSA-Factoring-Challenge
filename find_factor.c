#include <stdio.h>
#include <stdlib.h>
#include "file.h"

long int* find_factor(long long int n)
{
	long long int m = n / 2;
	long int *p;
	int j = 0;
	int b = 2;
	p = malloc(b * sizeof(long long int));
	for (long long int i = 2; i <= m; i++)
	{
		if (n % i == 0)
		{
			p = realloc(p,b * sizeof(long long int));
			*(p + j) = i;
			j++;
			b++;
		}
	}
	*(p + j) = '\0';

	return p;
}


int *find_prime(int n)
{
	int *p;
	int j = 0;
	p = malloc(n * sizeof(int));

	for (int i = 2; i < n; i++)
	{
		if (i == 2 || i == 3 || i == 5)
		{
			//p = realloc(p,2 * sizeof(int));
			*(p + j) = i;
			j++;
		}
		else
		{
			if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
			{
			//	p = realloc(p,2 * sizeof(int));
				continue;
			}
			else
			{
				*(p + j) = i;
				j++;
			}
		}
	}
	*(p + j) = '\0';

	return p;
}


/*long int main(void)
{
	//int arr[];
	int *p;
	p = malloc(100 * sizeof(int));
	int n = 0;

	for (int i = 0; i < 100; i++)
	{
		*(p + i) = i;
		n++;
	}
	
	long long int n = 45425587715;
	long int *p;
       	//p = malloc(n * sizeof(long long int));
	p = find_factor(n);

	for (int j = 0; *(p + j) != '\0'; j++)
	{
		printf("%ld ", *(p + j));
	}
	printf("\n");
}*/

