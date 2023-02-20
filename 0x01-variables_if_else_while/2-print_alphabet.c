#include <stdio.h>
/**
 * main - the entry point of the program
 *
 * Return: The return value of 0
 */
int main(void)
{
	int lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	putchar('\n');
	return (0);
}
