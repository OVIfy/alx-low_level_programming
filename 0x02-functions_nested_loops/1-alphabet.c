#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints all lowercase letters
* Return - returns nothing
*/
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		if (ch == 'z')
			_putchar('\n');
	}
}
