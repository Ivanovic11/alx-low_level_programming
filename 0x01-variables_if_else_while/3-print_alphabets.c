#include <stdio.h>
#include <stdlib.h>
/**
  *main - code runs here
  *
  *Return: Code returns 0
  */
int main(void)
{
	int upperChar;
	int lowerChar;

	for (lowerChar = 0x61; lowerChar < 0x7B; lowerChar++)
	{
		putchar(lowerChar);
	}
	for (upperChar = 0x41; upperChar < 0x5B; upperChar++)
	{
		putchar(upperChar);
	}
	putchar(0x0A);
	return (0);
}
