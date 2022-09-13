#include "main.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
       int file_from, file_to, re, wri, err_close;
       char *buf;
       buf = malloc(sizeof(char) * 1024);
       file_from = open(argv[1], O_RDONLY);
       file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
       
       if (argc != 3)
       {
              dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
              exit(97);
       }     
       re = read(file_from, buf, 1024);
       wri = write(file_to, buf, 1024);

       if (re == -1 || file_from == -1)
       {
              dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
              exit(98);
       }
       if (wri == -1 || file_to == -1)
       {
              dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
              exit(99);
       }
       err_close = close(file_from);
       if (err_close == -1)
       {
              dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
              exit(100);
       }

       err_close = close(file_to);
       if (err_close == -1)
       {
              dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
              exit(100);
       }
       return (0);
}