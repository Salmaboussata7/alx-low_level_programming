#include "main.h"

/**
 * read_textfile - reads a file and outputs its contents to stdout
 * @filename:  the name of the file to read
 * @letters: the number of letters to read from the file
 * Return: the number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
register int _open, _read, _write;
register char *buffer = malloc(sizeof(char)  * letters);

if (!(buffer))
{
free(buffer);
return (0);
}
if (!(filename))
{
return (0);
}
_open = open(filename, O_RDONLY);
_read = read(_open, buffer, letters);
_write = write(STDOUT_FILENO, buffer, _read);
if (_open == -1 || _read == -1 || _write == -1 || !(_write == _read))
{
free(buffer);
return (0);
}
free(buffer);
close(_open);
return (_write);
}
