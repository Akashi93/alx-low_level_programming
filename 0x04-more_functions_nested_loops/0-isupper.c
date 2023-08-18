#include "main.h"

/**
*_isupper - Checks for uppercase
*Description: Checks for uppercase characters
*@c: Character checked
*Return: 1 if uppercase else 0
*/

int _isupper(int c)
{
	if (c == 65 && c <= 90)
		return (1);
	else
	return (0);
}
