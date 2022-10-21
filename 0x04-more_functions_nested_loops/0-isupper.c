#include "main.h"
/**
* _isdigit - checks if input is a digit
* @c: number to check
* Return: returns 1 if c is digit else 0
*/

int _isdigit(int c)
{
	int A = (char)c;

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
