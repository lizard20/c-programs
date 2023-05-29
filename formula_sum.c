/*
**	Gets the sum of numbers, 
**	from 1 to n, using the formula:
**	n*(n+1)/2.
**
**	Author: Aldo Núñez
** */

#include <stdio.h>
#include <stdlib.h>

int sum(int);

int
main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Usage: ./formula_sum n\n");
		return -1;
	}
	int n = atoi (argv[1]);	

	printf("%d\n", sum(n));
	
	return 0;
}

int
sum(int n)
{
	return n*(n + 1)/2;
}
