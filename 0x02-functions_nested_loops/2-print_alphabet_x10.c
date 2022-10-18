#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		_putchar(ch);
		if (ch == 'z')
		{
			_putchar('\n');
			ch = 'a';
			i++;
			_putchar(ch);
		}
		if (i == 10)
			break;
	}
	return (0);
}
