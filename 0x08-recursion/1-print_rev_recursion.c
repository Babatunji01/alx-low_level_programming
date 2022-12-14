#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: param string to be printed in reverse mode
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
