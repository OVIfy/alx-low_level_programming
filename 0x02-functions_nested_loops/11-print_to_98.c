#include <stdio.h>
/**
* print_to_98 - for returning absolut value of a number re
* @start: number to start at
* Return: absoluted integert
*/
void print_to_98(int start)
{
	int i = 0;

	for (i = start; i <= 98; i++)
	{
		if (i <  98)
			printf("%d, ",i)
		else
			printf("%d",i)
	}
	printf("\n")
	return;

}
