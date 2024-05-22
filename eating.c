#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hp = 50;
    int breadAmount;
    int day;
    char eatBread;

    printf("Current HP : %d\n", hp);
    printf("Do you want to eat bread ? [Y/N] :");
    scanf("%c", eatBread);

    for (day= 5 ; day > 0; day--)
    {
        hp = hp - 10;
        printf("Current HP : %d\n", hp);
    }
    
    return 0;
}