/*
Scrivere un programma in C che:

Stampi un messaggio introduttivo con il proprio nome e cognome
Definire 5 macro per le seguenti operazioni aritmetiche:
Somma
Sottrazione
Moltiplicazione
Divisione
Modulo
L'utente inserirà due numeri interi e il programma mostrerà il risultato di ogni operazione utilizzando le macro definite.
Il programma mostrerà anche un calcolo complesso in cui sono utilizzate insieme tutte le macro definite in un unico calcolo
provare ad inserire le macro in un file .h diverso dal file principale .c
*/

#include <stdio.h>
#include <string.h>
#define stampa_nome(Nome) printf("%s", #Nome)
#define sum(x,y) x+y
#define sottr(x,y) x-y
#define div(x,y) x/y
#define mol(x,y) x*y
#define mod(x,y) x%y

int main(){
    int a,b;
    printf("Inserisci il primo valore: \n");
    scanf("%d", &a);
    printf("Inserisci il secondo valore: \n");
    scanf("%d", &b);

    printf("Valore della somma: %d", sum(a,b));
    printf("Valore della sottrazione: %d", sottr(a,b));
    printf("Valore della moltiplicazione: %d", mol(a,b));
    printf("Valore della divisione: %d", div(a,b));
    printf("Valore della modulo: %d", mod(a,b));
    return 0;
}