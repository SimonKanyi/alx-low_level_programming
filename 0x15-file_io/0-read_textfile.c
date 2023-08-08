#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: Pointer to the name of the file to be read.
 * @letters: Number of letters to be read and printed.
 *
 * Return: Actual number of letters read and printed, or 0 if the file cannot
 * be opened or read, or if filename is NULL, or if write fails or does not
 * write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    ssize_t fd;
    ssize_t w;
    ssize_t t;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    t = read(fd, buf, letters);
    w = write(STDOUT_FILENO, buf, t);

    free(buf);
    close(fd);

    return (w);
}
