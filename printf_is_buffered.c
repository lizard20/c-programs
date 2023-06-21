/*
** Shows that printf is a buffered
** output. But stderr is not. It
** prints every character as it arrives.
**
** Author: Aldo Núñez
** */

#include <stdio.h>
#include <unistd.h>

int
main()
{
	while(1)
	{
		printf(":");			// prints ":" when the buffer is full
		fprintf(stderr,".");	// prints '.' every cycle
		usleep(10000); 			// 10000 ~ 10 ms
	}

	return 0;
}
