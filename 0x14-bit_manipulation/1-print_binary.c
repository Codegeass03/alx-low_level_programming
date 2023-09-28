#include "main.h"
#include<stdio.h>
/**
 * print_binary -  prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
int bit;
int shift = sizeof(unsigned long int) * 8 - 1;
int flag = 0;

if (n == 0)
{
putchar('0');
return;
}
while (shift >= 0)
{
bit = (n >> shift) & 1;
if (bit || flag)
{
putchar(bit + '0');
flag = 1;
}
shift--;
}
}
