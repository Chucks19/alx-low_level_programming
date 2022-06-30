#include <stdio.h>
/**
 * main - is starting of code
 *
 * return is always 0
 */
int main(void)
{
	int a;
	char b;
	double d;
	float f;
	long int l;
	long long int ll;
	/* with sizeof we get the size of the type*/
	printf("int size is: %lu bytes\n", sizeof(a));
	printf("char size is: %lu bytes\n", sizeof(b));
	printf("double size is: %lu bytes\n", sizeof(d));
	printf("float size is: %lu bytes\n", sizeof(f));
	printf("float size is: %lu bytes\n", sizeof(l));                                                                        
       printf("float size is: %lu bytes\n", sizeof(ll));
       return (0);
}
