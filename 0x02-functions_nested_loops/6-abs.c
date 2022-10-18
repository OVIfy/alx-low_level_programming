#include <stdio.h>
/**
* _abs - for returning absolut value of a number re
* @num: number to be absoluted

* Return: absoluted integert
*/
int _abs(int num)
{
	int ab;

	if (num >= 0)
		ab = num;
	if (num < 0)
		ab = -num;
	return ab;
}
