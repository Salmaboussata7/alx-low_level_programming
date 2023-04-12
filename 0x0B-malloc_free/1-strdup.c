#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory
 *
 * @str: string to copy
 * Return: pointer of duplicated string
 */

char *_strdup(char *str)
{
	char *strd;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strd = (char *)malloc(sizeof(char) * (i + 1));

	if (strd == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strd[j] = str[j];

	return (strd);
}
