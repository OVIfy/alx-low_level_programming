#include <stdio.h>
#include "main.h"
void print_long(int value) {
	if(value != 0)
        {
                print_long(value/10);
                _putchar((value%10) + '0');
	}
}
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
			if (m > 0)
				print_long(m);
			else
				_putchar('0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) >= 10)
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
