#include <stdio.h>
#include <stdlib.h>
/**
 * main - this sums up arguments
 * @argc: this is the number of arguments
 * @argv: this is the array of arguments
 * Return: this will return 0
 */
int isInteger(const char *str);
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc <= 1){
		printf("%d\n", 0);
	}
	else{
		for (i = 1; i < argc; i++){
			if (!isInteger(argv[i])){
				printf("Error\n");
				return (1);
			}
			else{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
/**
 * isInteger - this checks whether an argument is an integer
 * @str this is the argument passed
 * Return: this will return 
 */
int isInteger(const char *str){
	while (*str != '\0'){
		if (*str < '0' || *str > '9'){
			return 0;
		}
		str++;
	}
	return (1);
}
