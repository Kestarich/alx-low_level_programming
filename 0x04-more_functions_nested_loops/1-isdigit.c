#include "main.h"

/**
 * _isdigit - Checks if a character is a number.
 * @c: The character to be checked.
 * Return: 1 if character is digit.
 */

int _isdigit(int c)

{

	if (c >= '0' && c <= '9')

		return (1);
	else
		return (0);

}
