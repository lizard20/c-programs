/*
**	Given two integer numbers, determines
**	if they are friends. Is so, prints the 
**	proper divisor numbers.
**
**	Amicable or friend numbers, are two different
**	natural numbers related in such a way that
**	the sum of the proper divisors of each 
**	is equal to the other number.
**
**	Example: 
**	proper divisors of 220 are:
**	1 2 4 5 10 11 20 22 44 55 110
**	The sum is: 284
**
**	proper divisors of 284 are:
**	1 2 4 71 142
**	The sum is: 220
**
** Friends numbers:
	(220, 284),
  	(1184, 1210),
  	(2620, 2924), 
  	(5020, 5564),
  	(6232, 6368),
  	(10744, 10856), 
  	(12285, 14595), 
  	(17296, 18416),
  	(63020, 76084),
  	(66928, 66992)

	Author: Aldo Núñez
** */

#include <stdio.h>
#include <stdlib.h>

int add_proper_divisors(int);
void print_proper_divisors(int);

int
main(int argc, char* argv[])
{
	if (argc < 3)
	{
		printf("Usage: ./friend_numbers a b\n");
		return 1;
	}
	int a, b, i, j;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	i = add_proper_divisors(a);
	if ((i == b) && ((j = add_proper_divisors(b)) == a))
	{
		printf("%d and %d are friend numbers\n", a, b);
	}
	else
	{
		printf("%d and %d are NOT friend numbers\n", a, b);
	}
	printf("The proper divisors are:\n");
	printf("%d: ", a);
	print_proper_divisors(a);
	printf("%d: ", b);
	print_proper_divisors(b);

	return 0;
}

int
add_proper_divisors(int n)
{
	int sum = 0;

	for (int i = 1; i < n; ++i)
	{
		if ( (n % i) == 0)
		{
			sum += i;
		}
	}
	return sum;
}

void
print_proper_divisors(int n)
{
	for (int i = 1; i < n; ++i)
	{
		if ( (n % i) == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
