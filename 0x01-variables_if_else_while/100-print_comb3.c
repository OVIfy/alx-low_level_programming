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
	int num  = 49;
	int d = 48;

	for (num = 48; num <= 57; num++)
	{
		for (d = 48; d <= 57; d++)
		{
			if (d > num)
			{
				putchar(num + '\0');
				putchar(d + '\0');
				if (num + d != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
