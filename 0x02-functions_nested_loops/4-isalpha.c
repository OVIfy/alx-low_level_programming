#include <stdio.h>
/**
* _isalpha - checks if argument is an alphabete
* @c: character to be checked

* Return: 1 if number is a small letter , 0 if it isn't
*/
int _isalpha(char c)
{
	int valid = 0;
	char l = 'a';

	for (l = 'a'; l <= 'z'; l++)
	{
		if(l == c)
		{
			valid = 1;
			break;
		}
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		if(l == c)
		{
			valid = 1;
			break;
		}
	}
	return (valid);
}

