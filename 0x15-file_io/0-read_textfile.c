#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, readed;
	char *buffer = malloc(sizeof(char *) * letters);

	file_d = open(filename, O_RDONLY, 0600);

	if (buffer == NULL || filename == NULL)
	return (0);

	if(file_d == -1)
	return (0);

	readed = read(file_d, buffer, letters);
	write(STDOUT_FILENO, buffer, readed);

	free(buffer);
	close(file_d);
	return(readed);
}