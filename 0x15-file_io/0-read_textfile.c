#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to
 *                 the POSIX standard output.
 * @filename: name of the file
 * @letters: letters you want to copy
 * Return: acial number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t num_read, num_written;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	num_read = fread(buffer, sizeof(char), letters, fp);

	if (num_read == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	num_written = fwrite(buffer, sizeof(char), num_read, stdout);

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
