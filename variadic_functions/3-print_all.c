#include "variadic_functions.h"
/**
 * print_all - this prints all types of arguments
 * @separator: this is the separator between strings
 * @n: this is the number of strings
 * Return: this will return nothing
 *
 *
 */
void print_all(const char * const format, ...)
{
	unsigned int FORMAT_LEN;
	float FLOAT_CURR;
	int INT_CURR;
	char *STRING_CURR;
	unsigned int i;
	va_list args;

	va_start(args, format);
	/**while statement for chacking if formai is null goes here*/
	FORMAT_LEN = strlen(format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				INT_CURR = va_arg(args, int);
				printf("%c", INT_CURR);
			break;
			case 'i':
				INT_CURR = va_arg(args, int);
				printf("%d", INT_CURR);
			break;
			case 'f':
				FLOAT_CURR = va_arg(args, double);
				printf("%f", FLOAT_CURR);
			break;
			case 's':
				STRING_CURR = va_arg(args, char*);
				if (STRING_CURR == NULL)
				{
					printf("(nil)");
				}
				printf("%s", STRING_CURR);
			break;
			default:
				break;
		}
		if (i != FORMAT_LEN - 1 && (format[i + 1] == 'c' ||
			format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
		{
			printf(", ");
		}
		i++;
	}
		printf("\n");

		va_end(args);
}
