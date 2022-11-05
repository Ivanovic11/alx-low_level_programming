#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _memcpy -copies n bytes from memory area src to memory area dest
  *@dest: string dest
  *@src: string src
  *@n: number of bytes to be copied
  *Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
