#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse.
* Return: always 0
*/
int main(void)
{
char ch;
for (ch = 'Z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
