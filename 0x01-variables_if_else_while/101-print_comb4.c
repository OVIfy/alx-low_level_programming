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
	int e = 48;

	for (num = 48; num <= 57; num++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (e = 48; e <= 57; e++)
				{	
				if (e > d && d > num)
				{
					putchar(num + '\0');
					putchar(d + '\0');
					putchar(e + '\0');
					if (num + d + e != 168)
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
