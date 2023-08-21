#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int = 0;
while (s[i] == ' ' || s[i] == '\t')
{
i++;
}
if (s[i] == '-' || s[i] == '+')
{
sign = (s[i] == '-') ? -1 : 1;
i++;
}
(s[i] >= '0' && s[i] <= '9')
{
if (result > INT_MAX / 10 ||
(result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
{
return (sign == 1)
}
result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign)
}
