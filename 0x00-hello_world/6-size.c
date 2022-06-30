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
	printf("Size of a char: %lu byte(s)\n", sizeof(a));
        printf("Size of an int: %lu byte(s)\n", sizeof(b));                                                                     
        printf("Size of a long int: %lu byte(s)\n", sizeof(l));	
        printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
        printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
