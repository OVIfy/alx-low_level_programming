#include <stdio.h>
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
/**
* main - entry point of all C programms
* Return: returns an integer
*/
int main(void)
{
	print_alphabet();
	return (0);
}
