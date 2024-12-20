#include <stdio.h> //std input output

int main() {
    printf("hello world!\n"); // print format   // \n new line

    char name[32]; //variabile che può contenere fino a 32 caratteri

    printf("Enter a name: ");
    scanf("%s",name);
    printf("Hello\t%s", name); // \t è il carattere di escape per tabulazione 

    return 0; //valore di ritorno per compilazione corretta 
}