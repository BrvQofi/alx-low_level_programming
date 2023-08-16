#include "main.h"


	/**
	 * print_sign - prints the sign of a number
	 * @n: the int to check
	 *
	 * * Description:
 * This function checks the sign of the given integer and prints the corresponding sign character.
 * If the integer is positive, it prints "+" and returns 1.
 * If the integer is zero, it prints "0" and returns 0.
 * If the integer is negative, it prints "-" and returns -1.
 *
 * Return:
 * 1, 0, or -1, depending on the sign of the integer.
 * The corresponding sign character is printed to the console as well.
	 * Return: 1 and prints + if n is greater than zero
	 * 0 and prints 0 if n is zero
	 * -1 and prints - if n is less than zero
	 */
	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}
