#include "main.h"
/**
* print_triangle - checks if input is a digit
* @n: number to check
* Return: returns 1 if c is digit else 0
*/

void print_triangle(int n)
{
	int i = 0;
	int j = 0;
	int b = n;

	if (n > 0)
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if ( j >= b )
					_putchar('#');
				else
					_putchar(' ');
			}

			b--;
			_putchar('\n');
		}
	else
		_putchar('\n');
}
