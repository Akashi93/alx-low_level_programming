#include "main.h"

/**
*_islower - Prints lower case alphabet
*@c: the character to check
*Description: Print lower case alphabets
*Return: 1 if lower case else return 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
