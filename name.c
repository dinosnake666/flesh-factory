#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX_LIMIT 11

int main(){
    
    char name [MAX_LIMIT];
    printf("Enter your name here (10 characters maximum): ");
    fgets(name, MAX_LIMIT, stdin);
    printf("Your name is %s\n", name);
    return 0;
}