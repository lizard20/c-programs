/**
** Create a dynamic array of integers.
**
** Example:
** $ ./dynamic_array 10
**
** Author: Aldo Núñez
** */

#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char* argv[])
{
  if (argc < 2)
  {
    printf("Usage: %s n\n", argv[0]);
    return 1;
  }

  int* array;
  int n = atoi(argv[1]);

  /* Allocate memory for n integers */
  array = (int*)malloc(n * sizeof(int));
  if (array == NULL) 
  {
    printf("Memory allocation has failed!\n");
    return 1; 
  }

  /* Initialize and print the array */
  for (int i = 0; i < n; ++i) 
  {
    array[i] = i + 1;
    printf("%d ", array[i]);
  }
  printf("\n");

  /* Free memory */
  free(array);

  /* To avoid dangling pointer */
  array = NULL; 

  return 0;
}

