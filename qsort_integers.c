/*
**	Sorting integer numbers
**	using qsort algorithm
**
**	Author: Aldo Núñez
** */

#include <stdio.h> 
#include <stdlib.h>

int comp_int (const void*, const void*);
void print_array (const int*, const size_t);

int 
main ()
{
	int arr[] = {10, 8, 32, 9, -10, 5};

	const size_t N = sizeof(arr)/sizeof(arr[0]);

	printf("Unsorted array: \n");
	print_array (arr, N);

	qsort(arr, N, (size_t) sizeof(int), comp_int);
	
	printf("Sorted array: \n");
	print_array (arr, N);

	return 0;
}

int 
comp_int (const void * p1, const void * p2)
{
  //return (*(const int*)p2 - *(const int*)p1); 	// for descendign order
  return (*(const int*)p1 - *(const int*)p2);		// for ascending order
}

void
print_array (const int* a, const size_t N)
{
	for(int i = 0; i < N; ++i)
  	{   
    	printf("%3d ", a[i]);
  	}
	putchar('\n');
}

