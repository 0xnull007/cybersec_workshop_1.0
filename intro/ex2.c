#include<stdio.h>

void foo()
{
   char c = 'A';
   char *ptr = &c;

   ptr = ptr + 25;
   *ptr = *ptr + 20;

}

int main(void)
{
    printf("Still sitting here. It means ");

    foo();

    printf("you are NOT");
    printf("you are ");
    printf("enjoying it.\n");

    return 0;
}