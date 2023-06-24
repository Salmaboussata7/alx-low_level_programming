#include "main.h"
/**
 * _strpbrk - entry point
 *
 * @s: input
 * @accept: input
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
