#include <stdio.h>

/**
 * main - prints alphabet in lowercase then in uppercase
 *
 * Return: always 0
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 'a' ; i < 52 ; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);

}
