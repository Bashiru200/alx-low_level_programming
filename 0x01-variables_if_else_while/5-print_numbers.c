#include <stdio.h>
/**
 * main - the main entry point
 *
 * Return: this function returns 0
 */
int main(void)
{
	int sdigit = 48;

	while (sdigit <= 57)
	{
		putchar(sdigit);
		sdigit++;
	}
	putchar('\n');
	return (0);
}
