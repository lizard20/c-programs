/*
** Determine if a string is a 
** palindrome or not.
**
** Examples of palindromes:
** racecar, madam, rotator, civic,
** kayak, 123321
**
** Aldo Núñez
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(const char*);


int
main(int argc, char* argv[])
{
    if (argc < 2 )
    {
        printf("Usage: ./is_palindrome my_string");
        return 1;
    }
    
    printf("%s\n", is_palindrome(argv[1])? "True" : "False" );

    return 0;
}

bool
is_palindrome(const char* s)
{
    // string length
	size_t length = strlen(s);

    for (int i = 0; i < length/2; ++i)
    {
        if (s[i] != s[length - 1 - i])
        {
            return false;
        }
    }
 
    return true;
}
