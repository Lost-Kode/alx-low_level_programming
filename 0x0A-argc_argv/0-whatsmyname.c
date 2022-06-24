 #include <stdio.h>

/**
 * main - print name of a programe
 * @argc: argument counter
 * @argv: pointer to the array of argument
 * Return: 0
 */



int main(int argc, char *argv[])

{

	if (argc > 0)

		printf("%s\n", argv[0]);



	return (0);

}
