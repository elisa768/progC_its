// include standard input/output library
#include <stdio.h>
#include <stdbool.h>

// macro: costanti di pre-compilazione 
#define NEW_LINE printf("\n");
#define PI_GRECO 3.141592   //non va messo ; altrimenti dà errore
// main function - the entry point 
// the return value of the main is an integer
int main()
{
    // print the message "Hello World!!!" to the console
    // \n is the shortcut for new line
    printf("Hello World!!!\n\n\n");

    // variable of 32 chars
    char name[32];

    // ask for a name
    printf("Enter a name: ");

    // read the input of the user
    scanf("%s", name);

    // print a message with the name entered
    printf("\nHello\t%s\n\n\n", name);

    bool b = true;

    printf("my bool value %d", b);

    NEW_LINE;
    NEW_LINE;
    NEW_LINE;

    int i=10;

    printf("my integer value %d", i);

    NEW_LINE;

   float f=10.0;
   printf("enter a real number: ");
   scanf("%f",&f);
    NEW_LINE;

    printf("my float value %f",f);

    NEW_LINE;

    printf("==  area cerchio == ");
    printf("inserisci raggio: ");
    scanf("%f",&f);
    NEW_LINE;

    float area = f*f*PI_GRECO;
    float funny = (f+f-PI_GRECO)/10.0;

    printf("L'area del cerchio e' %f",area);

    NEW_LINE;

    printf("calcolo con operatori matematici' %f",funny);

    NEW_LINE;
    NEW_LINE;

    // printf("\n");

    /* return 0: indicated that the program is terminated
       successfully */
    return 0;
}