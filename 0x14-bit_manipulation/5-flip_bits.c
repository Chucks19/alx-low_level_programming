#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
       unsigned long int differnce, checker;
       unsigned int j, i;

       j = 0;
       checker = 0;
       differnce = n ^ m;
       for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
       {
              if ((differnce | checker) == 1)
                     j++;
              checker <<= 1;
       }

       return (j);
}