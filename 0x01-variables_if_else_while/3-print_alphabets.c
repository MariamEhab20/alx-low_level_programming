#include <stdio.h>
/**
 * main - Entry point
 * Description: priny alphabet in lowercase then in uppercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char s = 'a';
	char c = 'A';
	/"prints a - z"/
		while (s <= 'z')
		{
			putchar(s);
			s++;
		}
	/*prints A - Z*/
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	printf ("\n");
	return (0);
}
