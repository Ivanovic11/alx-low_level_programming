#include "main.h"

/**
 * _memset - fills the first n bytes of the memory array pointed
   to by s with the constant byte b
 *
 * @s: the string's pointert
 * @b: the constant byte b
 * @n: the number of bytes to be filled
 *
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

return (s);
}
