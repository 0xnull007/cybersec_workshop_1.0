#include<stdio.h>

void anonymous()
{
    puts("You did something cool. :)");
}


int main(void)
{
    const int x = 0;
    int y = 20;

    int *ptr = &y;
    *(ptr + 1) = 10;

    if(x != 0)
    {
        anonymous();
    }

    return 0;
}