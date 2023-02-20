#include <stdio.h>
/**
 * main - the program is embeded within this function
 *
 * Return: the return value is 0
 */
int main(void)
{
	int lower  = 97;
	int upper  = 65;

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
