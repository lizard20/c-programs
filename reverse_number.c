/*
** Reverses the digits of a given number.
** Example: 567 -> 765
** Author: Aldo Núñez
** */

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char* argv[])
{
	if (argc < 2 )
	{
		printf("Usage: ./reverse_number n\n");
		return -1;
	}
	int n = atoi(argv[1]);

	while (n != 0)
	{
		printf("%d", n % 10);
		n /= 10;
	}
	printf("\n");

	return 0;
}
