/*
  Determina si dos números enteros son 
  amigos. E imprime los divisores propios

  Números amigos para pruebas. Tomadas de
  wikipedia
  (220, 284),
  (1184, 1210),
  (2620, 2924), 
  (5020, 5564),
  (6232, 6368),
  (10744, 10856), 
  (12285, 14595), 
  (17296, 18416),
  (63020, 76084),
  (66928, 66992)
*/

#include <stdio.h>

// prototipos
int suma_de_divisores(int );
 

int 
main()
{
  int a, b;
  printf("Ingrese dos números: ");
  scanf("%d%d", &a, &b);

  if (suma_de_divisores(a) == b && suma_de_divisores(b) == a) 
  {
    printf("%d y %d son números amigos.\n", a, b);
    printf("Los divisores propios de %d son: ", a);
    int i;
    for (i = 1; i <= a/2; i++) 
    {
      if (a % i == 0) 
      {
        printf("%d ", i);
      }
    }
    printf("\n");
    printf("Los divisores propios de %d son: ", b);
    for (i = 1; i <= b/2; i++)
    {
      if (b % i == 0) 
      {
        printf("%d ", i);
      }
    }
    printf("\n");
    } 
    else
    {
    printf("%d y %d no son números amigos.\n", a, b);
    }
  
  return 0;
}

int
suma_de_divisores(int n)
{
  int i, suma = 0;
  for (i = 1; i <= n/2; i++) 
  {
    if (n % i == 0)
    {
      suma += i;
    }
  }
  return suma;
}

