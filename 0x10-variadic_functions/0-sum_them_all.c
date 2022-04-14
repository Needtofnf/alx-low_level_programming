#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


int sum_them_all(const unsigned int n, ...)
{
  va_list ap;
  int i, sum;

  va_start (ap, n);         /* Initialize the argument list. */

  sum = 0;
  for (i = 0; i < n; i++)
    sum += va_arg (ap, const unsigned int);    /* Get the next argument value. */

  va_end (ap);                  /* Clean up. */
  return (sum);
}


int main (void)
{
    int n ;
  /* This call prints 16. */
  printf ("%d\n", sum_them_all (2, 98, 1024));
  printf ("%d\n", sum_them_all (4, 98, 1024, 402, -1024));
 if (n == 0)
 {
     return (0);
 }

}

