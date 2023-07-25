/*
** Calculate the number of grains of wheat
** on a chessboard given that the number on
** each cell doubles.
**
** The first cell has 1 grain, the second
** 2 grains, the third 4 grains, the fourth 8 grains
** and so on.
**   cell 	|| grains	||	total grains
**   ----------------------------------------
**		1	||	1		||		1
**		2	||	2		||		3
**		3	||	4		||		7
**		4	||	8		||		15
**		5	||	16		||		31
**...........................................
**
** there are two functions that shows:
**	-how many grains were on a given cell: 
**		grains_for_cell
**
**	-and the total number of grains accumulated up to a
**	given cell.
**		total_grains
** 
** Examples:
** ./grains_on_cheesboard 1
** total number of grains: 1

** ./grains_on_cheesboard 3
** total number of grains: 7
**
** ./grains_on_cheesboard 4
** total number of grains: 15
**
** ./grains_on_cheesboard 10
** total number of grains: 1023
**
** ./grains_on_cheesboard 64
** total number of grains: 18446744073709551615

** Author: Aldo Núñez
** */

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<stdbool.h>
#include <ctype.h>


uint64_t total_grains(uint8_t);
uint64_t grains_for_cell(uint8_t);
bool is_positive_integer(const char*);

int
main(int argc,char* argv[])
{
	if(argc < 2)
	{
		fprintf(stderr, "usage: ./grains_on_chessboard number\n\n");
		fprintf(stderr, "Example: ./grains_on_chessboard 10\n");
		return 1;
	}

	if (!is_positive_integer(argv[1]))
	{
		fprintf(stderr, "The input must be a positive integer\n\n");
		fprintf(stderr, "Example: ./grains_on_chessboard 10\n");
		return 1;
	}
	int cell = atoi(argv[1]);
	if (cell > 64)
	{
		fprintf(stderr, "The chessboard has only 64 cells");
		return 1;
	}

	printf("total number of grains: %llu\n", total_grains(cell));

	return 0;
}

uint64_t
total_grains(uint8_t number_of_cells)
{
	uint64_t total_grains = 0;

	for (uint8_t i = 1; i <= number_of_cells; ++i )
	{
		total_grains += grains_for_cell(i);
	}
	return total_grains;
}

uint64_t
grains_for_cell (uint8_t cell)
{
	uint64_t result = 1;

	for(uint8_t j = 1; j < cell; ++j)
	{
		result *= 2; 
	}
	return result = (cell == 0 ? 0 : result);
}

bool
is_positive_integer(const char* str )
{
    while ( *str != 0 )
    {
        if ( !isdigit ( *str ) )
        {
            return false;
        }
        str++;
    }
    return true;
}
