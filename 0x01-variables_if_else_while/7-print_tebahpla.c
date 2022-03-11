#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  *
  * Return: Always (Success)
  */

int main(void)
{
    char a;

    for (a ='z'; a >= 'a'; a--)
    {
    putchar(a);
    }
    putchar('\n');

    return (0);
}
