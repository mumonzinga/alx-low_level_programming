#include "main.h"
#include <stdio.h>

/**
 * _islower - prints 1 or 0 depending on input
 *
 * Description: prints all lowercase letters
 *		#int c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
 */

int _islower(int c)
{
	//@c - first parameter
	
	return (c >= 'a' && c <= 'z');
}
