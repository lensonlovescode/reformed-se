#include "main.h"
/**
 * create_file - Creates a file with specified content or truncates an existing file.
 *
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file. A NULL-terminated string.
 *
 * Return: On success, returns 1. On failure, returns -1.
 *   -1 is returned if the file cannot be created, written, or if any other error occurs.
 *
 * Requirements:
 * - If the file already exists, the permissions should not be changed.
 * - If the file already exists, it should be truncated.
 * - If @text_content is NULL, an empty file is created.
 */
size_t _strlen(const char *str);
int create_file(const char *filename, char *text_content)
{
	int filedescriptor, byteswritten;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	filedescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filedescriptor == -1)
	{
		return (-1);
	}

	byteswritten = write(filedescriptor, text_content, _strlen(text_content));

	if (byteswritten == -1)
	{
		return (-1);
	}
	chmod(filename, 600);
	close(filedescriptor);
	return (1);
}
/**
 * custom_strlen - Calculate the length of a string.
 *
 * @str: The input string.
 * Return: The length of the string (excluding the null terminator).
 */
size_t _strlen(const char *str)
{
    size_t length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

