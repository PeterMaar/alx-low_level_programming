#include <stdio.h>

/**
*main - prints
*New line
*Return: always 0
*/

int main(void)
{
char la;
for (la = 'a'; la <= 'Z'; la++)
{
if (la != 'e' && la != 'q')
putchar(la);
}
putchar('\n');
return (0);
}
