#include <stdio.h>
/**
* _islower - checks if argument is in lowercase
* @c: character to be checked

* Return: 1 if number is a small letter , 0 if it isn't
*/
int _islower(char c)
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

        return valid;
}


/**
* main - entry point of all C programms
* Return: returns an integer
*/
int main(void)
{
	int test;
	test = _islower(108);
	printf("%u\n",test);
	return (0);
}
