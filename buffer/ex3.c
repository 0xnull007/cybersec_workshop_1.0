#include<stdio.h>

void vulnerable()
{
    char buffer[30];
    puts("Enter your name");
    gets(buffer);
    // scanf("%s", buffer);
    // cin >> buffer;

    printf("Welcome %s!\n", buffer);
}


int main(void)
{
    vulnerable();
    return 0;
}