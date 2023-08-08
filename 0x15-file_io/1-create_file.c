#include "main.h"

/**
 * create_file - Creates a file and writes text to it.
 * @filename: Pointer to the name of the file to be created.
 * @text_content: Pointer to the text to be written to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
    int fd, w, len = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (len = 0; text_content[len];)
            len++;
    }

    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    w = write(fd, text_content, len);

    if (fd == -1 || w == -1)
        return (-1);

    close(fd);

    return (1);
}
