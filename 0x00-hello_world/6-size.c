#include <stdio.h>
/**
 * main - is starting of code
 *
 * return is always 0
 */
int main(void)
{
	char a;
	int b;
	long int l;
	long long int ll;
	float f;
	/* with sizeof we get the size of the type*/
	printf("size of a char: %lu byte(s)\n", sizeof(a));
        printf("size of a int: %lu byte(s)\n", sizeof(b));                                                                     
        printf("size of a long int: %lu byte(s)\n", sizeof(l));	
        printf("size of a long long int: %lu byte(s)\n", sizeof(ll));
        printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
