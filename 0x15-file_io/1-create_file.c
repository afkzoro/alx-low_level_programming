#include "main.h"

/**
 * @brief Create a file object
 *
 * @param filename
 * @param text_content
 * @return int
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;

	if (filename == NULL)
	return (-1);

	file_d = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
	return (-1);

	if (text_content != NULL)
	write(file_d, text_content, _strlen(text_content));

	close(file_d);
	return (-1);
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
