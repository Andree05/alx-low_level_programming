#include "main.h"
/**
 * _pow_recursion -Returns the value of x rasied to the power of y.
 * @x: the power to be raised.
 * @y: the power.
 * return: result
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);
	return (result);
}
