#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int main(int argc, char *argv[])
{
	FILE *ptr;
	char line[256];

	ptr = fopen("test.txt", "r");
	if (ptr == NULL)
	{
		fprintf(stderr,"cant open file\n");
		exit(1);
	}
	while (fgets(line, sizeof(line), ptr))
	{
		long long int number = atoi(line);
		long int *p;
		p = find_factor(number);
		printf("prime of %lld = ", number);
		for (int j = 0; *(p + j) != '\0'; j++)
		{
			printf("%ld ", *(p + j));
		}
		printf("\n");

	}
	/*int *p;
	p = find_prime(222345784);
	for (int i = 0; *(p + i) != '\0'; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");*/
}

