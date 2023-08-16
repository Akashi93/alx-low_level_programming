#include "main.h"

/**
*isalpha - Prints the alphabet
*Description: Printd alphabet upper and lower case
*@c: The character to print
*Return: 1 if alphabet else prints 0
*/

int _isalpha(int c)
{

	for ((c = 'a' && c <= 'z') || (c = 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
