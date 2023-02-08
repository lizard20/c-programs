/*
**	The Euclidian algorithm to find
**	the greatest common divisor, gcd, 
**	between two positive integers.
**	
**	Taken from, Classic Data Structures
**	in C++, 
**	Timothy Budd
**	page 80.
**
** 	Author: Aldo Núñez
**	
**	Test numbers:
**  GCD(10, 15) => 5
	GCD(35, 10) => 5
	GCD(31, 2)	=> 1
	GCD(606, 979) => 1 
	GCD(120, 700) => 20

** */

#include <stdio.h>
#include <stdlib.h>

unsigned int gcd(unsigned int, unsigned int);

int
main (int argc, char* argv[])
{
	if ( argc < 3 )
	{	
		printf ("Usage: ./gcd m n\n");
		return -1;
	}
	int m, n;

	m = atoi(argv[1]);
	n = atoi(argv[2]);


	printf("GCD(%d, %d): %d\n", m, n, gcd(m,n));

	return 0;
}


unsigned int
gcd(unsigned int m, unsigned int n)
{
	if (n == 0)
	{
		return m;
	}

	if (m == 0)
	{
		return n;
	}

	while ( m != n )
	{
		if(n > m)
		{
			n = n - m;
		}
		else
		{
			m = m - n;
		}
	}
}
