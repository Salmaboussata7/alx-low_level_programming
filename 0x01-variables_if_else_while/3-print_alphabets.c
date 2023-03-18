#include <stdio.h>
/**
 * main - entry point
 *
 * Description : prints the alphabet in lowercase, and then in uppercase
 * Return: always 0
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	while (C <= 'Z')
	{
		putchar(C);
		++C;
	}
	putchar('\n');
	return (0);
}
