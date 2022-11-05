#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  * _strcpy - copies the string pointed to by source to destination
  *@dest: destination pointer
  *@src: source pointer
  *Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
