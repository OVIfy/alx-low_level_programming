#include "main.h"
/**
* _isupper - checks if input is a digit
* @c: number to check
* Return: returns 1 if c is digit else 0
*/

int _isupper(int c)
{
	char d = (char)c;

	if (d >= 65 && d <= 90)
		return (1);

	return (0);
}
