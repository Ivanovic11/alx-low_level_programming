#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strstr - locates a substring inside a string
  *@haystack: the string
  *@needle: the substring
  *Return: pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	char *checker;

	checker = strstr(haystack, needle);
	return (checker);
}
