/*
**	Sorting using the selection
**	algorithm.
**	Based on: Fundamental of algorithmics.
**	G. Brassard and P. Bratley
**	page 62.
**
**  The complexity of this algorithm 
**  in all scenarios is O(n²). 

**	Author: Aldo Núñez
** */

#include <stdio.h>

void selection(int*);
void print(int*);

unsigned N;

int
main()
{

	// Testing data
	// int u[] = {1,2,3,4,5,6};
	int u[] = {6,5,4,3,2,1};
	
	// size of the array 
	N = sizeof(u)/sizeof(int);

	printf("\n*** Sorting by Selection ***\n\n");
	print(u);
	printf("-------------------------\n");
	printf("-------------------------\n");
	selection(u);

	return 0;
}

void 
selection(int* t)
{
	int minj, minx;

	for (int i = 0; i < N - 1; ++i )
	{
		minj = i;
		minx = t[i];
		for ( int j = i + 1; j < N; ++j)
		{
			if (t[j] < minx )
			{
				minj = j;
				minx = t[j];
			}
			t[minj] = t[i];
			t[i] = minx;
			print(t);
		}
		printf("-------------------------\n");
	}
}

void 
print(int* u)
{
	for (int i = 0; i < N; ++i)
	{
		printf("%d ", u[i]);
	}
	printf("\n");
}
