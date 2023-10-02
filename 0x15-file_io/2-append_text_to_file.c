#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to name of the file
 * @text_content: pointer to NULL terminated string to
 * add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * else filename is NULL return -1
 * or Return 1 if the file exists and -1 if the file does not exist
 *  or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t len;
ssize_t written;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

len = (text_content != NULL) ? strlen(text_content) : 0;
written = write(fd, text_content, len);

close(fd);

return (((written == len) ? (1) : (-1)));
}
