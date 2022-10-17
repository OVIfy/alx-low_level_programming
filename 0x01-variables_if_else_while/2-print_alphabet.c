#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
* main - this function is the entry function for all C programs
* Return: it returns an integer
*/
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'z')
		putchar('\n');
	}
	return (0);
}
