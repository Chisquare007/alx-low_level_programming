#include "main.h"

/**
 * _isupper - checks for uppeecase character
 * @c: function parameter
 * Return: 1 in success 0 on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
