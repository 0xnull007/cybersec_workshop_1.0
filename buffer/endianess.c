#include<stdio.h>

int main(void)
{
   int x = 65;

   int *ptr = &x;

   printf("value of x = %d\n", *ptr);
   printf("value of x = %d\n", *(char*)ptr);

    return 0;
}