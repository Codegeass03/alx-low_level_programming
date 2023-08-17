#ifndef POSITIVE_OR_NEGATIVE_H
#define POSITIVE_OR_NEGATIVE_H
void positive_or_negative(int n);
#endif

#include "main.h"
#include <stdio.h>

/**
 * main - Tests if a number is positive or negative
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;

n = 0;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("0 is neither positive nor negative\n");
}
return (0);
}
