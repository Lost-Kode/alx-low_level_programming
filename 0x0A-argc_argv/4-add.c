#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - check each argv whether a number
 * @argvv: argv to be checked
 * Return: true if it is a number else false
 */

bool is_num(char *argvv)
{
	int i = 0;

	while (argvv[i])

	{

		if (!(argvv[i] >= '0' && argvv[i] <= '9'))

			return (0);

		i++;

	}

	return (1);
}

/**
 * main - print sum if all arguments are numbers
 * @argc: argument counter
 * @argv: pointer to the array of argument
 * Return: 0 for succes 1 if an arg is not a number
 */

int main(int argc, char *argv[])
{
	int i = 1;

	int sum = 0;

	if (argc == 1)
	{

		printf("0\n");

		return (0);

	}

	while (i < argc)

	{

		if (is_num(argv[i]))

			sum += atoi(argv[i]);

		else

		{

			printf("Error\n");
			return (1);

		}

		i++;

	}

	printf("%d\n", sum);

	return (0);

}
