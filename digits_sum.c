/*
** Add tthe digits of a number:
** Example: 325: 3+2+5 = 10
** */

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Usage: ./digits_sum n\n");
		return -1;
	}

	int n = atoi(argv[1]);
	int sum = 0;

	while (n != 0)
	{
		sum += n %10;
		n /= 10;
	}

	printf("%d \n", sum);

	return 0;
}
