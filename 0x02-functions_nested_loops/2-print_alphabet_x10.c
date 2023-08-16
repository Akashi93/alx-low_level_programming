#include "main.h"

/**
*print_alphabet - Prints the alphabet
*Description: Prints the alphabet 10xtimes
*Return: void
*/

void print_alphabet_x10(void)
{
	char a;
	int i;

	for  (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			_putchar('\n');
		}
	}
}
