#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point
*
*Description: Program to print alphabets except q and e \n
*
* Return: return 0
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
