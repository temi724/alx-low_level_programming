#include "holberton.h"

/**
 *print_alphabet_x10 - display alphabet x10
 *Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		c = 'a';
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
