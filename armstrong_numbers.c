/*
** Determines if a number is
** an Armstrong number
**
**	Example:
**	153 number has 3 digits:
**	Then, if it is an Armstrong number
**	it satisfies the following:
**
**	1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
** 	
** 	Author: Aldo Núñez
** */

#include <stdio.h>
#include <stdbool.h>


// prototypes 
bool is_armstrong_number(int candidate);
int number_of_digits(int);

int
main ()
{
	/**
	** Some Armstrong numbers for testing
	** 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 
	** 371, 407, 1634, 8208, 9474
	** */
	const int n = 370; 

	printf("Is %d an Armstrong number? %s\n", n, is_armstrong_number(n) ? "True" : "False" );

	return 0;
}

bool
is_armstrong_number(int n)
{
	const int digits = number_of_digits(n);
	const int is_arm = n;
	int sum = 0;

	for (int i = 0; i < digits; ++i)
	{
		int d = n % 10;
		int digit = d;

		// for to get the power 
		for( int j = 1; j < digits; ++j)
		{
			digit *= d;
		}
		sum += digit;
  		n /=10;
	}
	
	return is_arm == sum;
}

int
number_of_digits(int n)
{
	int digits = 0;

	while(n)
	{
		n /= 10;
		digits++;
	}
	return digits;
}

