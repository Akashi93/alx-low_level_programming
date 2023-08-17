#include "main.h"

/**
*_isupper - Checks for uppercase
*@c: character to be checked
*Description: Checks for uppercase characters
*Return: 1 if uppercase else 0
*/

int _isupper(int c)
{
	if (c == 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
