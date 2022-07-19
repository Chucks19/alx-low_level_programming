
Skip to content
Pulls
Issues
Marketplace
Explore
@Chucks19
saadrama /
alx-low_level_programming
Public

Code
Issues
Pull requests
Actions
Projects
Wiki
Security

    Insights

alx-low_level_programming/0x07-pointers_arrays_strings/main.h
@saadrama
saadrama Tasks
Latest commit c667cd4 22 hours ago
History
1 contributor
20 lines (20 sloc) 614 Bytes
#ifndef MAIN_H
#define MAIN_H
/**
* File: mainn.h
* Auth: Brennan D Baraban
* Desc: Header file containing prototypes for all functions
*    used in the 0x06-pointers_arrays_strings directory.
*/
#include <stddef.h>
int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
#endif
Footer
© 2022 GitHub, Inc.
Footer navigation

    Terms
    Privacy
    Security
    Status
    Docs
    Contact GitHub
    Pricing
    API
    Training
    Blog
    About

You have no unread notifications
