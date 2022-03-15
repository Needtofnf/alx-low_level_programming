#include "main.h"
#include "0-putchar.c"
/**
 * program that prints _putchar
 * Return: 0 
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
