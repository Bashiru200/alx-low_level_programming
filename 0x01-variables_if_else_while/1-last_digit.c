#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entery point of the c program
 *
 * Return: this will return 0
 */
int main(void)
{
	int l_digit, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l_digit = n % 10;
	if (l_digit > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, l_digit);
	}
	else if (l_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less then 6 and not 0\n", n, l_digit);
	}
	return (0);
}
