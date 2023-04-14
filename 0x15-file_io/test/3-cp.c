#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void error_exit(int status, const char *msg, const char *file);
void copy_file(const char *file_from, const char *file_to);

int main(int argc, char **argv)
{
    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to", "");

    copy_file(argv[1], argv[2]);

    return (0);
}

void error_exit(int status, const char *msg, const char *file)
{
    if (file != NULL && file[0] != '\0')
        dprintf(STDERR_FILENO, "%s %s\n", msg, file);
    else
        dprintf(STDERR_FILENO, "%s\n", msg);
    exit(status);
}

void copy_file(const char *file_from, const char *file_to)
{
    int fd_from, fd_to, rd, wr;
    char buffer[BUFFER_SIZE];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file", file_from);

    fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        error_exit(99, "Error: Can't write to", file_to);
    }

    while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        wr = write(fd_to, buffer, rd);
        if (wr != rd)
        {
            close(fd_from);
            close(fd_to);
            error_exit(99, "Error: Can't write to", file_to);
        }
    }

    if (rd == -1)
    {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Error: Can't read from file", file_from);
    }

    if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd", "file_from");

    if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd", "file_to");
}
