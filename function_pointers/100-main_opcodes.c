#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print opcodes of its own main function.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, 1 on incorrect number of arguments, 2 on negative number of bytes.
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	int i;
	char *main_addr;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	main_addr = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", main_addr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}

