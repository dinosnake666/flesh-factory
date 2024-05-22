#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int hp = 50;
    int day;
    int sanity = 50;
    char eating;
    loop:
    printf("You have found [bread]. Would you like to eat ? [Y/N] :");
    scanf("%c", &eating);


    for (day= 5 ; day > 0; day--)
    {
        
        if (eating == 'Y' && hp < 50)
        {
            hp = hp + 10;
        }
        else if (eating == 'N')
        {
            hp = hp - 10;
            printf("Current HP : %d\n", hp);
        }
        
        
        /*sanity = sanity- 5;
        printf("Current sanity: %d\n", sanity);*/
        sleep(3);
        goto loop;

    }
    
    return 0;
}