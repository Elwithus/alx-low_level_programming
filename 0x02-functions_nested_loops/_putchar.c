#include "main.h"
#include <unistd.h>
/**
 * _putchar - weite the character c to stdout
 * gc: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appopriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
