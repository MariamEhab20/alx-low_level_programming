#include <stdio.h>
/**
 * main - Entry point
 * Descreption: print all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
