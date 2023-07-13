/*
** Determine the endianess of the
** processor
** 
** Little Endian (LE): Least significant byte is stored
** at the smallest memory address
** Big Endian (BE): The most significatn byte is stored 
** at the smallest memory address
**
** Author: Aldo Núñez
**
** */

#include <stdio.h>
#include <stdint.h>

typedef union Data Data;

union Data 
{
	uint32_t a;
	uint8_t c[4];

};

int
main()
{
	int i;
	Data d;
	Data* ptr = &d;


	ptr -> a = 0x76543210;

	if ( ptr -> c[0] == 0x10)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("Big endian\n");
	}

	printf("0x%0x\n\n", ptr -> a);

	printf("Byte       Address\n");
	for(i = 0; i < sizeof(ptr -> a); i++)
	{
		printf("0x%0x || %p\n", ptr -> c[i], &(ptr -> c[i]));
	}


	return 0;
}
