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
	_putchar(l);
	return (l);
}
