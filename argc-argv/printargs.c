#include <stdio.h>
/**
 *main - this prints out the arguments
 *@argc: this is the number of argumens
 *@argv: this is the array of arguments
 *Return: this will return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (argc);
}
