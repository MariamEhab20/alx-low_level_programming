#include <stdio.h>
/**
 * main - Enty point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %lu byte(S)\n", sizeof(acharacter));
	printf("Size of an int: %lu byte(S)\n", sizeof(ainteger));
	printf("Size of a long int: %lu byte(S)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(S)\n", sizeof(alonglong));
	printf("Size of a float: %lu byte(S)\n", sizeof(afloat));
return (0);
}
