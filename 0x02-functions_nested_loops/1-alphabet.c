#include "main.h"

/*
 *print_alphabet - prints the alphabet in lowercase
 *Description: Prints ALphabet in Lower case
 *Return: 0 on success
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
