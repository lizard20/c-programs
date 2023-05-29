/*
** Read a text input with spaces
** using scanf
**
** Author: Aldo Núñez
** */

#include <stdio.h>

int
main() 
{
	int id;
    char name[50];	
	char temp;

	printf("Enter your id number: ");
	scanf("%d", &id);
	scanf("%c", &temp);

	printf("Enter name: ");
    scanf("%[^\n]", name);

    printf("Name:      %s\n", name);
	printf("Id number: %d\n", id);


    return 0;
}

