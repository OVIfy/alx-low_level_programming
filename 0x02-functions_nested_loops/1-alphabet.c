#include <stdio.h>
/**
* main - entry point of all C programms
* Return: returns an integer
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
