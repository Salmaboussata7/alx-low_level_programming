#include "main.h"
/**
 * _isupper - checks if the character is upper or not
 * @c: character checked
 *
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else if (c >= 97 && c < 123)
		return (0);
	return (0);
}
