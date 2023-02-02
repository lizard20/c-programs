/*
**	Sorting using the insertion 
**	algorithm.
**
**	Author: Aldo Núñez
** */

#include <stdio.h>

void insertion (int*);
void print (int*);

int
main ()
{
	// Testing data
	//int u[] = {1, 2, 3, 4, 5, 6};
	int u[] = {6, 5, 4, 3, 2, 1};

	print(u);
	printf("-------------------------\n");
	printf("-------------------------\n");
	insertion (u);

	return 0;
}

void
insertion (int* u)
{
	static int flag = 0;
	int x, j = 0;

	for (int i = 1; i < 6; i++)
	{
		x = u[i];
		j = i -1;
		while( (j >= 0) && (x < u[j]))
		{
			u[j+1] = u[j];
			j = j - 1;
			print(u);
		}
		u[j+1] = x;
		print(u);
		printf("-------------------------\n");
	}
}

void 
print(int* u)
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", u[i]);
	}
	printf("\n");
}
