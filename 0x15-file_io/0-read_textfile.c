#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to
 *                 the POSIX standard output.
 * @filename: name of the file
 * @letters: letters you want to copy
 * Return: acial number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);
	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	ssize_t num_read = fread(buffer, sizeof(char), letters, fp);

	if (num_read == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	ssize_t num_written = fwrite(buffer, sizeof(char), num_read, stdout);

	if (num_written != num_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (num_written);
}
