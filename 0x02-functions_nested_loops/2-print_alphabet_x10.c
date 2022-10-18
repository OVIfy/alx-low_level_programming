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

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                _putchar(ch);
                if (ch == 'z')
                {
                        _putchar('\n');
                        ch = 'a';
                        i++;
                        _putchar(ch);
                }
                if (i == 10)
                        break;
        }
}
