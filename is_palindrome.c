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
is_palindrome(const char* word)
{
    size_t size = 0;

    // compute the string size
    while (word[size] != '\0')
    {
        size++;
    }

    for (int i = 0; i < size/2; ++i)
    {
        if (word[i] != word[size - 1 - i])
        {
            return false;
        }
    }
 
    return true;
}
