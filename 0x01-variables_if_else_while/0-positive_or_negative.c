#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main funtion
 *
 * Return: always 0
 */

int main(void)
{
int n;

srand(time(0);
n = rand() - RAND_MAX / 2;
/* yor code there */
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zere", n);
else
printf("%d is negative", n);
printf("\n")
return (0);
}
