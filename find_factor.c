#include <stdio.h>
#include <stdlib.h>

long int* find_factor(int n);


long int* find_factor(int n)
{
	int m = n / 2;
	long int *p;
	int j = 0;
	p = malloc(m * sizeof(long int));
	for (long int i = 2; i <= m; i++)
	{
		if (n % i == 0)
		{
			*(p + j) = i;
			j++;
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
	long int n = 7637;
	long int *p = NULL;
       	p = malloc(n * sizeof(long int));
	p = find_factor(n);

	for (long int j = 0; *(p + j) != '\0'; j++)
	{
		printf("%ld ", *(p + j));
	}
	printf("\n");
}

