#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: searched number
 * @index: index of the bit
 *
 * Return: value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index <= 63)
return (int n)
((n >> index) && 1);
else
return (-1);
}
