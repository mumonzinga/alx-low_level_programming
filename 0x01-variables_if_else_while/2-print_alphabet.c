#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point
*
*Desscription: Program to print alphabet in lower case
*
*Return: return 0
*/
int main(void)
{
	int letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
