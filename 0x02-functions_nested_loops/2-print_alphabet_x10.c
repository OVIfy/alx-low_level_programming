#include <stdio.h>
#include <unistd.h>
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
/**
* main - entry point of all C programms
* Return: returns an integer
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}
