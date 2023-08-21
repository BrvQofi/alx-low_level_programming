_putchar.c


#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(cgar c)
{
	return (write(1,&c, 1));
}

_putchar.c content
