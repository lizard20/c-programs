/*
** Read a text input with spaces
** using fgets.
**
** Author: Aldo Núñez
** */

#include <stdio.h>

int
main()
{
	char name[50];
	int id;
	char temp;

	printf("Enter your id number: ");
	scanf("%d", &id);
	scanf("%c", &temp);

	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);

	printf("Name:      %s", name);
	printf("Id number: %d\n", id);

	return 0;
}
