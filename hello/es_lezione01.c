#include <stdio.h>

int main(){

    char name[32];
    char surname[32];

    printf("Enter name and surname: ");
    scanf("%s", name);
    scanf("%s", surname);
    printf("Hello%s", name+surname);
    printf("Merry Christmas and a happy new year");

    return 0;

}