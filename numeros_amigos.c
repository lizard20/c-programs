/*
    Determina si dos números enteros son 
    amigos. E imprime los divisores propios
*/

#include <stdio.h>


// prototipos
void numeros_amigos(int, int);
int d(int);

int
main() 
{
    numeros_amigos(1, 10000);

    return 0;
}


void 
numeros_amigos(int inicio, int fin)
{
    int i, j, k;
    for (i = inicio; i < fin; i++)
    {
        j = d(i);
        if (i != j && d(j) == i)
        {
            printf("(%d, %d)\n", i, j);
            
            printf("Divisores propios de %d: ", i);
            for (k = 1; k < i; k++) 
            {
                if (i % k == 0) {
                    printf("%d ", k);
                }
            }
            printf("\nDivisores propios de %d: ", j);
            for (k = 1; k < j; k++)
            {
                if (j % k == 0) 
                {
                    printf("%d ", k);
                }
            }
            printf("\n");
        }
    }
}


int
d(int n)
{
    int sum = 0, i;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0) 
    {
            sum += i;
        }
    }

    return sum;
}