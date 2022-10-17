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
	int n;
	char longy[30] = "is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if (n % 10 < 6 && n % 10 != 0)
	printf("Last digit of %d is %d and %s\n", n, n % 10, longy);

	return (0);
}
