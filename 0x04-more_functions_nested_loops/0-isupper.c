#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 * Return: 1 if it is in uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
