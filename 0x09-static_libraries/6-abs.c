#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @r: integer input
 * Return: Absolute value of number of r
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
