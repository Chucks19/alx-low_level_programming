#include <stdio.h>
/**
 * main - is starting of code
 *
 * return is always 0
 */
int main(void)
{
	int a
	char b
	void c
	double d
	float f
	/* with sizeof we get the size of the type*/
	printf("int size is: %lu bytes\n", sizeof(a));
	printf("char size is: %lu bytes\n", sizeof(b));
	printf("void size is: %lu bytes\n", sizeof(c));
	printf("double size is: %lu bytes\n", sizeof(d));
	printf("float size is: %lu bytes\n", sizeof(f));
	return (0);
}
