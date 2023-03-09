#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - Finds the natural squareroot of an inputed number
 * @num: The number to find the square root of
 * @root: Root to be tested
 * Return: if the number has a natural squareroot - the square root
 * if the number does not have the squareroot - - 1.
 */
int find_sqrt(int num, int root)
{
	if ((num * num) == root)
		return (num);
	if (num == root)
		return (-1);
	return (1 * find_sqrt(num + 1, root));
}
/**
 * _sqrt_recursion - returns the natural square root of anumber
 * @n: number to find the squareroot
 * Return: natural squareroot of n.
 * If n does not have a natural squareroot, the function should rreturn -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(1, n));
}
