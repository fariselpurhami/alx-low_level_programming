#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - RETURN THE SUM OF A AND B.
 * @a: THE SUM OF OP_ADD.
 * @b: THE SUM OF OP_ADD.
 *
 * Return: A AND B TO THE SUM OF OP_ADD.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - RETURN THE DIFFERENCE BETWEEN A AND B.
 * @a: THE DIFFERENCE BETWEEN A AND B.
 * @b: THE DIFFERENCE BETWEEN A AND B.
 *
 * Return: A AND B TO THE DIFFERENCE OF OP_SUB.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - RETURN THE PRODUCT OF A AND B.
 * @a: THE PRODUCT BEWTWEEN A AND B.
 * @b: THE PRODUCT BETWEEN A AND B.
 *
 * Return: A AND B TO THE PRODUCT OF OP_MUL
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - RETURN THE RESULT OF A AND B.
 * @a: THE RESULT BETWEEN A AND B.
 * @b: THE RESULT BETWEEN A AND B.
 *
 * Return: A AND B TO THE RESULT OF OP_DIV
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - RETURN THE REMAINDER OF A AND B.
 * @a: THE REMAINDER BETWEEN A AND B.
 * @b: THE REMAINDER BETWEEN A AND B.
 *
 * Return: A AND B TO THE REMAINDER OF A AND B
 */
int op_mod(int a, int b)
{
	return (a % b);
}
