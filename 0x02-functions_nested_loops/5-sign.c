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
		printf("+");
		valid = 1;
	}
	if (num < 0)
	{
		printf("-");
		valid = -1;
	}
	if (num == 0)
	{
		printf("0");
		valid = 0;
	}
	return valid;
}
/**
* main - entry point of all C programms
* Return: returns an integer
*/
int main(void)
{
	int r;
	
	r = print_sign(-97);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
