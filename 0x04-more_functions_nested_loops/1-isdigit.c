#include "main.h"

/**
 * _isdigit - checks digit 0 through 9
 * @c: function oarameter
 * Return: 1 on success 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
