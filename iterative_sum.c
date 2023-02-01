/*
**	Gets the sum of numbers, 
**	from 1 to n, using iteration.
**	Author: Aldo Nuñez
** */

#include <stdio.h>
#include <stdlib.h>

int sum (int);

int
main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Usage: ./iterative_sum n\n");
		return -1;
	}
	int n = atoi (argv[1]);	

	printf("%d\n", sum(n));
	
	return 0;
}


int
sum (int n )
{
	int sum = 0;

	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
