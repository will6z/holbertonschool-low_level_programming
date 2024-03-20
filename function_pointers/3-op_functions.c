#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - adds to nums
 * @a: first num
 * @b: second num
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts nums
 * @a: first num
 * @b: second num
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mult two nums
 * @a: first num
 * @b: second num
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides
 * @a: first num
 * @b: second num
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a % b);
}
