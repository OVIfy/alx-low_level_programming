#include <stdio.h>
/**
* print_sign - prints sign of a number
* @num: number to check its sign
* Return: returns 1 if positiveb-1 if negative and 0 if z
*/
int print_sign(int num)
{
	int valid = 0;

	if (num > 0)
	{
		_putchar('+');
		valid = 1;
	}
	if (num < 0)
	{
		_putchar('-');
		valid = -1;
	}
	if (num == 0)
	{
		printf("0");
		valid = 0;
	}
	return valid;
}

