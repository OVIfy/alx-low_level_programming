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
	
	for (num = 48; num <= 57; num++)
	{
		putchar(num + '\0');
	}
	putchar('\n');
	return (0);
}
