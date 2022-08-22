#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t byte;

	if (filename == NULL)
	return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
	return (-1);

	byte = write(file_d, text_content, _strlen(text_content));

	if (text_content != NULL)
	{
		if (byte == -1)
		return (-1);
	}

	close(file_d);
	return (1);

}