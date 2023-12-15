#include<stdio.h>
#include<stdlib.h>

void vulnerable()
{
    char buffer[30];
    puts("Enter your name");
    gets(buffer);
}

int main(void)
{
    vulnerable();
    return 0;
}

void win()
{
    puts("Hope you enjoyed the journey. :)");

    puts("UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity.\nDennis Ritchie");

    exit(0);
}