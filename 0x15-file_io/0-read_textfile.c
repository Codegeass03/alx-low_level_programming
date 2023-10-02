#include "main.h"
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @letters:  number of letters it should read and print
 * @filename: text file to be read
 * Return:  actual number of letters it could read and print
 * if filename is NULL or function fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t t;
ssize_t w;

fd = open(filename, O_RDONLY);
if (fd == -1 || filename == NULL)
return (0);

buf = malloc(letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (w);
}
