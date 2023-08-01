/*
** Converts a binary number, represented as a string
** (e.g. '1010101'), to its decimal equivalent.
**
** Given a binary input string, the program 
** produces a decimal output. 
** The program handles invalid inputs.
** 
** Example: '1011' -> 42
**
** Author: Aldo Núñez
*/

#include <stdio.h>
#include <string.h>

int convert(const char*);
unsigned int base2_to_exponent(const int );
int is_binary_number(const char*);

int
main(int argc, char* argv[])
{
/****** Tests ************/	
//  2a!       //  invalid
//  001+      //  invalid
//  /001      //  invalid 
//  0         //  0 
//  1         //  1
//  1011      //  11
//  101010    //  42
//  101101110 //  366
/************************/

	if( argc < 2 )
	{
		fprintf(stderr, "Usage: ./binary2decimal binary_number\n\n");
		fprintf(stderr, "Example: ./binary2decimal 1011\n");

		return 1;
	}
	
	const char* binary_number = argv[1];

	if (!is_binary_number(binary_number))
	{
		fprintf(stderr, "%s, it's not a valid binary number\n", binary_number);
		return 1;
	}
	printf("binary to decimal\n", binary_number);	
	printf("%s --> ", binary_number);	
	printf("%d\n", convert(binary_number));

	return 0;
}

int
convert(const char* input)
{
	unsigned int index = 0, binary_digit;
	int decimal_number = 0;
	size_t length;
	

	length = strlen(input);

	while(input[index])
	{
		binary_digit = input[length - 1 - index] - '0';
		decimal_number += binary_digit * base2_to_exponent(index);
		index++;
	}

	return decimal_number;
}

unsigned int
base2_to_exponent (const int n)
{
	int result = 1;

	for(unsigned int j = 0; j < n; ++j)
	{
		result *= 2; 
	}
	
	return result;
}

int
is_binary_number(const char* input)
{
	unsigned int index = 0;

	while(*(input + index))
	{
		// 0 - false, 1 - true
		if (((input[index] - '0') > 1 ) || ((input[index] - '0') < 0 ))
		{
			return 0;			
		}
		index++;
	}
	return 1;
}
