/*
** Implement a binary search algorithm to find a value
** within an array of integer numbers.
** The complexity of this algorithm is: O(log N)
** 
** Author: Aldo Núñez 
** */

#include <stdio.h>
#include <stddef.h>

const int *binary_search(int value, const int* arr, const size_t length);
void print_array(const int*, const size_t);

int
main()
{
	/**** test arrays *****/
	const int arr[] = { 2, 3, 4, 10, 40, 50};
//	const int arr[] = {};
//	const int arr[] = {1, 2};
//	const int arr[] = {1};
	/*********************/

	const int value = 10;
	size_t length;

    length = sizeof(arr) / sizeof(arr[0]);
    length = sizeof(arr) / sizeof(arr[0]);
	print_array(arr, length);
	printf("value: %d\n", value);

	const int* result = binary_search(value, arr, length);
	if (result == NULL)
	{
		printf("\nnot found: %p\n", NULL);
	}
	else
	{
		printf("\nresult: %d\n", *result);
	}

	return 0;
}

const int*
binary_search(int value, const int* arr, size_t length)
{
	int mid, low = 0, high = length;

	if ( length == 0) 
	{
		return NULL;
	}

	while(low <= high)
	{
		mid = low + (high - low)/2;

		if(value == arr[mid])
		{
			return &arr[mid];
		}

		if (value > arr[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return NULL;
}

void
print_array(const int* arr, const size_t length)
{
	printf("array: ");
	for (int i = 0; i < length; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
