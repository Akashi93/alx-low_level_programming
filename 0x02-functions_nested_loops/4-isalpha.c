#include "main.h"

/**
*_isalpha - Prints the alphabet
*Description: Printd alphabet upper and lower case
*@c: The character to print
*Return: 1 if alphabet else prints 0
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
