#include <stdio.h>
#include "main.h"
/**
* _abs - for returning absolut value of a number re
* @num: number to be absoluted
* Return: absoluted integert
*/
int print_last_digit(int num)
{
	int l;

	l = num % 10;
	if (l == 0)
		l = 48;
	else if (l > 0)
		l = 48 + l;
	else
		l = 48 + (-l);
	_putchar(l);
 	return (l - 48);
}

int main(void)
{
	int r = print_last_digit(-22349);
	_putchar(r + '0');
	return 0;
}
