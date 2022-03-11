#include <stdio.h>

int main(void) 
{
  
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */


	char c;
   
	for (c = 'a'; c <= 'z';c++)
	
	if (c != 'e' && c != 'q')

	   {   
	   
		putchar(c);
	   }

    putchar('\n');

	
    return 0;
}
