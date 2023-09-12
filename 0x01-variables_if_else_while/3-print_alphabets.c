#include <stdio.h>

/**
 * main - prints alphabet in lowercase then in uppercase
 *
 * Return: always 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 'a' ; i < 26 ; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);

}
