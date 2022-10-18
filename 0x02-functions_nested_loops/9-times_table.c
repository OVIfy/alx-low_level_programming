#include <stdio.h>
#include "main.h"
/**
* times_table - ks if argument is an alphabet
* Return: 1 if number is a small letter , 0 if it isn't
*/
void times_table()
{
	int i = 0;
	int j = 0;
	int m = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			_putchar(m + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

