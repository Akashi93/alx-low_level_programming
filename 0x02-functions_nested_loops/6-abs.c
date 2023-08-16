#include "main.h"

/**
*_abs - Computes absolute value of integer
*Description: Computes absolute value of integer
*@n: Integer to check
*Return: Absolute value of int
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
