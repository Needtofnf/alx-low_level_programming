#include "main.h"
/**
 * _putchar
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
		 i++;
	}
	_putchar('\n');
	return (0);
}
