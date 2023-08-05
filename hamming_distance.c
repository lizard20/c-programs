/*
** Compute the hamming distance.
** When cells divide,their DNA replicates too. 
** Sometimes during this process mistakes happen
** and single pieces of DNA get encoded with the
** incorrect information. If we compare two strands
** of DNA and count the differences between them we 
** can see how many mistakes occurred. This is known
** as the "Hamming Distance".
**
** Author: Aldo Núñez
*/

#include <stdio.h>
#include <string.h>

int compute(const char*, const char*);

int
main()
{
	/***************** Tests *******************
	const char*	strand1 = "GAGCCTACTAACGGGAT";
	const char* strand2 = "CATCGTAATGACGGCCT";  // 7 

	const char* strand1 = "";
	const char* strand2 = "";  // 0

	const char*	strand1 = "GGACTGAAATCTG";
	const char* strand2 = "GGACTGAAATCTG"; // 0

	const char* strand1 = "AATG";
	const char* strand2 = "AAA";     // -1

	const char* strand1 = "AAAG";
	const char* strand2 = "AAA"; // -1

	****************************************/
	const char* strand1 = "GGACGGATTCTG";
	const char* strand2 = "AGGACGGATTCT"; // 9

	printf("Strand1: %s\n", strand1);
	printf("Strand2: %s\n", strand2);
	printf("The Hamming distance is: %d\n", compute(strand1, strand2));

	return 0;
}

int
compute(const char* lhs, const char* rhs)
{
    unsigned int index = 0;
    int hamming_distance = 0;

    if ( strlen(lhs) != strlen(rhs))
    {
        return -1;
    }
    while(*(lhs + index))
    {
        if(lhs[index] != rhs[index])
        {
            hamming_distance++;
        }
        index++;
    }
    return hamming_distance;
}
