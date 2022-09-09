#include <stdio.h>

/**
 *
 *  ** main - Prints combination of numbers
 *
 *   **
 *
 *    ** Return: Always (Success)
 *
 *     **/

int main(void)

{

	int c, i;

	for (c = '0'; c <= '9'; c++)

	{

		for (i = '0'; i <= '9'; i++)

		{

			if (c < i)

			{

				putchar(c);

				putchar(i);

			}

		}

	}

	putchar('\n');

	return (0);

}
