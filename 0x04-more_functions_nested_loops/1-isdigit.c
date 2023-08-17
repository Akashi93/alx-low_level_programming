#include "main.h"

/**
*_isdigit - Checks for digits
*@c: Digit Checked
*Description: Checks for digits
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
