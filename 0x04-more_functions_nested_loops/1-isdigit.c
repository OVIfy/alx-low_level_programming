#include "main.h"
/**
* _isdigit - checks if input is a digit
* @c: number to check
* Return: returns 1 if c is digit else 0
*/

int _isdigit(int c)
{
	int A = (char)c;

	if (A >= 48 && A <= 57)
		return (1);
	else
		return (0);
}
