#include <stdio.h>
int main(void) 
{
int a = 1, b = 2, next;
printf("%d, %d, ", a, b)
for (int i = 2; i < 98; i++) {
next = a + b;
printf("%d, ", next);
a = b;
b = next;
if ((i + 1) % 10 == 0) 
{
printf("\n");
}
}
printf("\n");

return (0);
}
