#include "main.h"
#include <string.h>
/**
 * create_file - creates a file.
 * @filename: pointer to  name of the file to create
 * @text_content: pointer to a null terminated string to write to the file.
 *
 * Return:  1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t w;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

w = (text_content != NULL) ?
write(fd, text_content, strlen(text_content)) : 0;

close(fd);

return (((w == -1) ? (-1) : (1)));
}
