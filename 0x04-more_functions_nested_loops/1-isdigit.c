#include "main.h"
/**
 * _isdigit - check numbers from 0 to 9
 * @c: the reference character
 * Return: shows 1 if true
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
