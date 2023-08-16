#include "main.h"

/**
*print_sign - Prints sign
*Description: Prints the sign of number
*@n: Number sign
*Return: Return 1 if positive 0 if zero -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
