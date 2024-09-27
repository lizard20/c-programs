/*
** Sorting integers using the
** merge sort algorithm
**
** For integer numbers
** Uncomment lines: 18, 29, 127
** Comment lines:   19, 32, 128
** 
** For floating point numbers 
** Uncomment lines: 19, 32, 128
** Comment lines:   18, 29, 127
**
** Author: Aldo Núñez
** */

#include <stdio.h>

//typedef int DataType;
typedef double DataType;

void merge_sort(DataType*, const size_t);
void merge(DataType*, DataType*, DataType*, const size_t);
void print_array (const DataType*, const size_t);

int
main()
{
	// Test for integers numbers
	// DataType a[] = {8, 2, 5, 3, 4, 7, 6, 1,-10 };

	// Test for floating point numbers
	DataType a[] = {188.9, 24.7, 23,6, 78.9, 987.4, -45.7, 12.6};

	const size_t N =  sizeof(a) / sizeof(DataType);

	printf("Unsorted array: \n");
	print_array(a, N);

	merge_sort(a, N);

	printf("Sorted array: \n");
	print_array(a, N);

	return 0;
}

void
merge_sort(DataType  array[], const size_t N)
{
  // Base case
  if (N <= 1)
  {
    return;
  }

  int middle = N / 2;

  DataType left_array[middle];
  DataType right_array[N - middle];

  int l = 0;
  int r = 0;

  for(; l < N; ++l)
  {
    if (l < middle)
    {
      left_array[l] = array[l];
    }
    else
    {
      right_array[r] = array[l];
      ++r;
    }
  }
  merge_sort(left_array, middle);
  merge_sort(right_array, N - middle);
  merge(left_array, right_array, array, N);
}



void 
merge(DataType* left_array, DataType* right_array, DataType* array, const size_t N)
{
  int left_size = N / 2;
  int right_size = N  - left_size;

  int i = 0, r = 0, l = 0;
  while (l < left_size && r < right_size)
  {
    if (left_array[l] < right_array[r])
    {
      array[i] = left_array[l];
      ++i;
      ++l;
    }
    else 
    {
      array[i] = right_array[r];
      ++i;
      ++r;
    }
  } // end while

  while (l < left_size)
  {
    array[i] = left_array[l];
    ++i;
    ++l;
  }

  while (r < right_size)
  {
    array[i] = right_array[r];
    ++i;
    ++r;
  }
}


void
print_array(const DataType* array, const size_t N)
{
	for (unsigned int i = 0; i < N; ++i)
	{
	//	printf("%d ", array[i]);	// print integer numbers
		printf("%.1f ", array[i]);	// print floating point numbers
	}
	putchar('\n');
}
