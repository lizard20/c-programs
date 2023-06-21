/*
**	Sorting using the insertion
**	algorithm.
**	Based on: Fundamental of algorithmics.
**	G. Brassard and P. Bratley
**	page 62.
**   
**  The complexity in the worst scenario and 
**  average scenario is O(n²). 
**  And, in the best scenario, when the list
**  is sorted, the complexity is O(n).
**  
**	Author: Aldo Núñez
** */

#include <stdio.h>

void insertion (int*);
void print (int*);

unsigned N;

int
main ()
{
	// Testing data
	//int t[] = {1, 2, 3, 4, 5, 6};
	int u[] = {6, 5, 4, 3, 2, 1};

	// size of the array  u
	N = sizeof(u)/sizeof(int);

	print(u);
	printf("-------------------------\n");
	printf("-------------------------\n");
	insertion (u);

	return 0;
}

void
insertion (int* t)
{
	static int flag = 0;
	int x, j = 0;

	for (int i = 1; i < N; ++i)
	{
		x = t[i];
		j = i -1;
		while( (j >= 0) && (x < t[j]))
		{
			t[j+1] = t[j];
			j = j - 1;
			print(t);
		}
		t[j+1] = x;
		printf("-------------------------\n");
	}
	print(t);
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
