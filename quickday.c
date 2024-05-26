#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    
    char name[18];
    printf("\"Hey you ! What's your name again ?\"\n");
    scanf("%[A-Z, a-z]s", name);
    printf("\"Good, %s... ~You just got a penality on your check.~ Get back to work.\"\n");
    Sleep(1750);
    printf("%s, was just a name I had to throw to my manager.\n");
    printf("She was constantly after me and yet she never knew my name.\n");
    Sleep(1750);
    printf("And it's been 9 months that I am working in this slaughterhouse...\n");
    Sleep(1750);


    return 0;
}