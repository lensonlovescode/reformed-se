#include <stdio.h>
#include <stdlib.h>
/**
 * main - this prints out the minimum number o coins for change
 * @argc: this is the number of arguments
 * @argv: this is the array of argumens
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2){
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0){
		printf("0\n");
	}
	else{
		int i = 0;
		int cents;
		int change = 0;
		int value[5] = {25, 10, 5, 2, 1};
		cents = atoi(argv[1]);

		while (i < 5){
			if (cents >= value[i] && cents != 0){
				cents = cents - value[i];
				if (cents >= value[i]){
					change++;
				}
				else {
					i++;
					change++;
				}
			}
			else{
				i++;
			}
		}
		printf("%d\n", change);
	}
	return (0);
}
