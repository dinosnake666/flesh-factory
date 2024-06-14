#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int days;
    int hp = 110;
    
    for (days = 1; days <= 10; days++)
    {
        hp = hp - 10;
        printf("Day %d.\n Current HP : %d.\n", days, hp);
        sleep(1.5);

    }
    

    return 0;
}