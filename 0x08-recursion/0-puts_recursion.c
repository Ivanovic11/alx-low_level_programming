#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _puts_recursions - print a string using recursion
 *  @s: the string
 * Return: void
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
	putchar('\n');
}
