#include <stdio.h>
/**
* main - entry point of all C programms
* Return: returns an integer
*/
int main(void)
{
	char ch = 'a';
	int i = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'z')
		{
			putchar('\n');
			ch = 'a';
			i++;
			putchar(ch);
		}
		if (i == 10)
			break;
	}
	return (0);
}
