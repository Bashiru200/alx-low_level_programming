#include <stdio.h>
/**
 * main - main entry of the program
 *
 * Return: return value of 0
 */
int main(void)
{
	int alpha = 97;
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
