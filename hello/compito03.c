/*
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
Specifiche del Programma

Usare #include <stdio.h> per l'input e l'output
Uso degli operatori matematici
Uso del tipo double per il solo risultato della divisione e del calcolo complesso
Cercare il modo di visualizzare solo due cifre dopo la virgola dei risultati della divisione e del calcolo complesso
La funzione main() deve includere:
dichiarazione di macro per il nome, il cognome
dichiarazione di macro per le operazioni
utilizzo di printf per stampare i messaggi e scanf per leggere i dati
utilizzo di \n per organizzare l'output su più righe
*/
#include <stdio.h>
#include <string.h>
#include "compito03.h"

int main() {
    int x, y;
    printf("Inserisci il primo numero: ");
    scanf("%d",&x);
    printf("Inserisci il secondo numero: ");
    scanf("%d",&y);
    printf("Somma: %d\n", somma(x,y));
    printf("Sottrazione: %d\n", sottr(x,y));
    printf("Moltiplicazione: %d\n", molt(x,y));
    printf("Divisione: %d\n", div(x,y));
    printf("Modulo: %d\n", mod(x,y));
    int z = mod(((somma(x,y)*x)-x)/y,x);
    printf("Calcolo complesso: %d\n", z);
    return 0;
}