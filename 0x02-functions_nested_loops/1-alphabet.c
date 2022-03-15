#include "main.h"
/**
* Description: Prints the alphabet with _putchar
 *
* Description main : all files under main
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
