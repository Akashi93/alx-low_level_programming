#include "main.h"
/*
*main - Entry Point
*
*Description: Prints The Alphabets
*
*Return: 0 (Success)
*/

void print_alphabet(void);
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
		_putchar("\n");
}
