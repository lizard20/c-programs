/*
** Counts the last characters from the
** last empty space. The last characters
** can be empty spaces also:
**
** Examples:
** 
** "test"    -> 4
** "test   " -> 7
** "   "     -> 3
** "this is a test    "  // 8
**
** Author: Aldo Núñez
** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int
main()
{
	/********* Tests ***********************
	char str[] = "this is a test";      // 4
	char str[] = "this is a test  ";    // 6
	char str[] = "this is a test    ";  // 8
	char str[] = "this is a test !#$ "; // 4
    char str[] = "test";                // 4
	char str[] = "test "; 	            // 5
	char str[] = "  test ";             // 5
	char str[] = "   ";                 // 3
	char str[] = "   t ";               // 2
**********************************************/
	char str[] = "this is a test    ";  // 8

	int index = 0, count_chars = 0, spaces = 0, end_spaces = 0;

	size_t length = strlen(str);


	// count empty spaces
	while (str[index])
	{
		if (isspace(str[index]))
		{
			spaces++;
		}
		index++;
	}

	// If there are no empty spaces we just have
	// the string length
	if (spaces == 0 )
	{
		printf("Total characters: %d\n", length);
		return 0;
	}

	// if there are empty spaces, checks if the string
	// ends in empty spaces and counts them
	index = length - 1;
	while(isspace(str[index]))
	{
		end_spaces++;
		index--;
	}

	// counts the no empty spaces after the last empty space
	while ((isspace(str[index]) == false) && (index >= 0))
	{
		count_chars++;
		index--;
	}

	printf("%s\n", str); 
	printf("number of characters: %d\n", count_chars + end_spaces);

	return 0;
}
