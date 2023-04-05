#include "main.h"
/**
 * _strstr - find substring in string
 *
 * @haystack: string given
 * @needle: substring given
 * Return: pointer to the beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, tmp;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			tmp = i + 1;
			while (needle[j] != '\0' && haystack[tmp] != '\0')
			{
				if (needle[j] != haystack[tmp])
					break;
				j++;
				tmp++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (0);
}
