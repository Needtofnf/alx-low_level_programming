#include <stdio.h>
#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{

    printf("The sum: %d", n);

    if(n == 0)
    {
        return (0);
    }

}

int main(void)
{
   int n;
     sum_them_all(n);


    return (0);
}
