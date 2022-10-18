#include <stdio.h>
#include "main.h"
/**
*
*
*/
void print_alphabet_x10(void)
{
	char ch = 'a';
        int i = 0;

        for (i = 0; i <= 9; i++)
        {
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
