#include "main.h"
/**
* _isdigit - checks if input is a digit
* @c: number to check
* Return: returns 1 if c is digit else 0
*/

int _isdigit(int c)
{
	char d = 'A';

	for (d = 'A'; d <= 'Z'; d++)
	{
		if (c == d)
			return (1);
	}
	return (0);
}
