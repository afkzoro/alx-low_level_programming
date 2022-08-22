#include "main.h"

/**
 * main - entry point
 *
 * @argc: ......
 * @argv: ......
 * Return: Always 1(SUccess)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_file - Copies a file into another file
 *
 * @src: Source
 * @dest: Destination
 * Return: Void.
 */
void copy_file(const char *src, const char *dest)
{
	int oldfd, newfd, readed;
	char buff[1024];

	oldfd = open(src, O_RDONLY);
	if (!src || oldfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	newfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(oldfd, buff, 1024)) > 0)
	{
		if (write(newfd, buff, readed) != readed || newfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(oldfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", oldfd);
		exit(100);
	}

	if (close(newfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", newfd);
		exit(100);
	}
}
