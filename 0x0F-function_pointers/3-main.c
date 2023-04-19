#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: Always 0 (Success)
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	oprt = get_op_func(argv[2]);

	if (!func)
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
