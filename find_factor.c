#include <stdio.h>
#include <stdlib.h>

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
			p = realloc(p, b * sizeof(long long int));
			*(p + j) = i;
			j++;
			b++;
		}
	}
	*(p + j) = '\0';

	return p;
}


long int main(void)
{
	//int arr[];
	/*int *p;
	p = malloc(100 * sizeof(int));
	int n = 0;

	for (int i = 0; i < 100; i++)
	{
		*(p + i) = i;
		n++;
	}*/
	long long int n = 1789664206425587715;
	long int *p;
       	//p = malloc(n * sizeof(long long int));
	p = find_factor(n);

	for (int j = 0; *(p + j) != '\0'; j++)
	{
		printf("%ld ", *(p + j));
	}
	printf("\n");
}

