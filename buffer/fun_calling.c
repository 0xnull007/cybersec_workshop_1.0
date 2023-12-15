#include<stdio.h>

void f1()
{
    puts("f1() is called");
}

void f2()
{
    puts("Now its your turn.");
}

int main(void)
{
    f1();
    puts("After calling f1()");

    f2();
    
    return 0;
}