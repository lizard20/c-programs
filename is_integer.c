/**
** Checks if an input
** is a valid integer number
**
** Examples:
** $ ./is_integer 678
** 678: valid number
**
** $ ./is_integer +689
** +689: valid number
**
$ ./is_integer 4567
** 4567 : valid number
**
$ ./is_integer 678a
** 678a: invalid number
**
** Author: Aldo Nuñez
** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


bool is_integer(char[]);

int
main(int argc, char* argv[])
{
	/* check if the inputs are */
	if (argc < 2 )
	{
		fprintf(stderr, "Usage: %s n\n", argv[0]);
		return 1;
	}

  bool result =  is_integer(argv[1]);
  printf("%s: %s\n", argv[1], result ? "valid number" : "invalid number");

	return 0;
}

bool
is_integer(char str[])
{
  int i = 0;
  int valid = 0;

  /* check if the firts char is a positive or negative sign */
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}


  /* check if every char or the rest of chars is a digit*/
	for (; i < strlen(str); ++i)
	{
		if (isdigit(str[i]))
		{
      valid = 1;
    }
    else 
    {
			valid = 0;
			break;
	  }
  }

	return  (valid ? true : false);
}
