/*
**	gets the sum of numbers, 
**	from 1 to n, using recursion.
**	Author: Aldo Nuñez
** */

#include <stdio.h>
#include <stdlib.h>

// prototype
int sum (int);

int
main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Usage: ./recursive_sum n\n");
		return -1;
	}
	int n = atoi (argv[1]);	

	printf("%d\n", sum(n));
	
	return 0;
}

int
sum(int n)
{
	return (n == 0) ? 0 : ((n == 1) ? 1 : (n + sum(n-1)));
}
