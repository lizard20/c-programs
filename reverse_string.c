/*
** Reverse string
**
** Example:
**  Hello, World! -> !dlroW ,olleH
**
**  Author: Aldo Núñez
** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_string(const char*);

int
main()
{
	/******* Tests **********/
//	char s[] = "hello"; // ->  olleh
//	char s[] = "";		// -> ""
	char s[] = "Hello, World!"; // -> !dlrow ,olleh
	/****************************/
	
	printf("%s\n", s);
	printf("%s\n", reverse_string(s));

	return 0;
}

char*
reverse_string(const char* s)
{
	unsigned int i = 0;
    size_t length = 0;

	// string length
	length = strlen(s);
    
	// allocate memory to store reversed string
	char* ptr;
	ptr = (char*)malloc(sizeof(char) * (length + 1));

    
	while(i < length)
	{
		*(ptr + i) = s[length - 1 - i];
		i++;
	}
	
	*(ptr + length) = '\0';
    
	return ptr;
}
