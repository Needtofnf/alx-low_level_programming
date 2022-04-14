#include <stdio.h>
#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{
  va_list ap;
  int i, sum, count;

  va_start (ap, count);

  sum = 0;
  for (i = 0; i < count; i++)
    sum += va_arg (ap, int);

  va_end (ap);
  return sum;
}


int main (void)
{

  printf ("%d\n", sum_them_all (3, 5, 5, 6));


  printf ("%d\n", sum_them_all (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

  return 0;
}

