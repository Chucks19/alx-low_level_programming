#include "main.h"

/**
 * create_file - creates a file and add content to it
 * @filename: file name
 * @text_content: content to put in the file
 *
 * Return: 1 for success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
       int fd, i = 0, ret;

       if (!filename)
              return (-1);
       fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
       if (fd == -1)
              return (-1);
       if (!text_content)
       {
              close(fd);
              return (1);
       }
       while (text_content[i])
              i++;
       ret = write(fd, text_content, i);
       if (ret == -1 || ret != i)
              return (-1);
       close(fd);
       return (1);
}