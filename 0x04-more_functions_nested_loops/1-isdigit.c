#include "main.h"

/**
*_isdigit - Checks for digits
*Description: Checks for digits
*@c: Character checked
*Return: 1 If digit else 0
*/

int _isdigit(int c)
{
	if (c == '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
