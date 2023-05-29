/*
** Determines if a number is odd or even
**
** Author: Aldo Núñez
** */

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Usage: ./odd_or_even n\n");
		return -1;
	}

	int num = atoi(argv[1]);
	printf("%s\n", num % 2 ? "Odd" : "Even");

	return 0;
}
