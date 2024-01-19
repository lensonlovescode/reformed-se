#include <unistd.h>
/**
 * @brief Writes a single character to the standard output.
 *
 * This function writes the character 'c' to the standard output (file descriptor 1).
 *
 * @param c The character to be written.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

