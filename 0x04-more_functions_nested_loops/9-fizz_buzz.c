#include <stdio.h>
/**
* main - entry point of all C programs
* Return: nothing
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if ( i % 5 == 0)
			printf("Buzz");
		else
			printf("%u",i);

		if (i != 100)
	 		printf(" ");
		else
			putchar('\n');
		i++;
	}

	return (0);
}
