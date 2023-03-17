#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print the standard error
 * Return: 1
 */

int main(void)
{
	char s[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, sizeof(s), 1,  stderr);
	return (1);
}
