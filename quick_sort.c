/*
** Sorting numbers using the
** quick sort algorithm
** 
** For integer numbers
** Uncomment lines: 18, 28, 99 
** Comment lines:   19, 31, 100
** 
** For floating point numbers 
** Uncomment lines: 19, 31, 100
** Comment lines:   18, 28, 99

** Author: Aldo Núñez
** */

#include <stdio.h>

//typedef int DataType; 	// integer numbers
typedef double DataType;	// floating point numbers

void quick_sort(DataType[], int, int);
void print_array (const DataType*, const size_t);

int
main()
{
	// Test for integers numbers
	// DataType a[] = {250, 129, -89, -45, 34, 29, 134, 223};

	// Test for floating point numbers
	DataType a[] = {4.5, -45.0, 29.6, 78.6, 10.5, 6.9, 134.5, 245.45};

	const size_t N =  sizeof(a)/sizeof(DataType);

	printf("Unsorted array: \n");
	print_array(a, N);

	quick_sort(a, 0, N - 1);
	printf("Sorted array: \n");
	print_array(a, N);

	return 0;
}

void
quick_sort(DataType  a[], int left, int right)
{
	int i, j, center;
	DataType pivot;

	center = (left + right)/2;
	pivot = a[center];

	i = left;
	j = right;

	do
	{
		while (a[i] < pivot)	// for descending order
		{						// change to: >
			++i;
		}	
		while (a[j] > pivot)	// for descending order
		{						// change to: <
			--j;
		}
		
		if (i <= j)
		{
			DataType temp;

			// swap
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			// end of swap
			
			++i;
			--j;
		}
	}while(i <= j);

	if (left < j)		
	{
		quick_sort(a, left, j);
	}

	if (i < right)		
	{
		quick_sort(a, i, right);
	}
}

void
print_array(const DataType* a, const size_t N)
{
	for (unsigned int i = 0; i < N; ++i)
	{
	//	printf("%d ", a[i]);	// print integer numbers
		printf("%.1f ", a[i]);	// print floating point numbers
	}
	putchar('\n');
}

