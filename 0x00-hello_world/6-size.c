#include <stdio.h>
/**
 * main - Enty point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu byte(S)\n", sizeof(c));
	printf("Size of an int: %lu byte(S)\n", sizeof(i));
	printf("Size of a long int: %lu byte(S)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(S)\n", sizeof(ll));
	printf("Size of a float: %lu byte(S)\n", sizeof(f));
return (0);
}
