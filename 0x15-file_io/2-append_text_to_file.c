#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: the name of the file
 * @text_content: null terminated string to append
 * Return: 1 if file exists | -1 if file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;

	if (filename == NULL)
	return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
	return (-1);

	if (text_content != NULL)
	{
		if (write(file_d, text_content, _strlen(text_content)) == -1)
		return (-1);
	}

	close(file_d);
	return (1);
}

/**
 * _strlen - Gives the length of a string
 * @s: The string considered
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
