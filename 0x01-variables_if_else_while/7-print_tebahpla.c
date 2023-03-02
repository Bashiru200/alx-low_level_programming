#include <stdio.h>
/**
 * main - data entry point
 *
 * Return: return value of 0
 */
int main(void)
{
	int ralphabet = 122;

	while (ralphabet >= 97)
	{
		putchar(ralphabet);
		ralphabet--;
	}
	putchar('\n');
	return (0);
}
