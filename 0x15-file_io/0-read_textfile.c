#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int len, string;
	char *buffer;

	if (!filename || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	len = read(file, buffer, letters);
	if (len == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	string = write(STDOUT_FILENO, buffer, len);

	free(buffer);
	close(file);
	if (string != len)
		return (0);
	return (len);
}
