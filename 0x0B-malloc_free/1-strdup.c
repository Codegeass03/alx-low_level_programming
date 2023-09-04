#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *nnn;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	nnn = malloc(sizeof(char) * (i + 1));

	if (nnn == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		nnn[r] = str[r];

	return (nnn);
}
