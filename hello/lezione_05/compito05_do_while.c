/*
simuli un semplice gioco in cui l'utente deve indovinare un numero segreto
il programma genera un numero segreto casuale tra 1 e 100
l'utente ha un numero illimitato di tentativi per indovinare il numero.
dopo ogni tentativo, il programma deve fornire un suggerimento: se il numero inserito è troppo alto, il programma deve stampare: "Troppo alto! Riprova."; se il numero inserito è troppo basso, il programma deve stampare: "Troppo basso! Riprova."
se l'utente indovina, il programma stampa: "Complimenti! Hai indovinato il numero in [X] tentativi." (dove [X] è il numero di tentativi effettuati).
il programma termina solo quando l'utente indovina il numero.
usare il ciclo do while per gestire i tentativi
utilizzare la funzione rand() per generare il numero segreto casualmente
gestire i tentativi con una variabile contatore
verificare che l'input sia valido (solo numeri interi positivi)
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int numero = rand() % 100;
    int x, conteggio=0;
    do {
        printf("Inserisci numero: ");
        scanf("%d", &x);
        if (x>numero) printf("Numero troppo grande\n");
        else if (x<numero) printf("Numero troppo piccolo\n");
        conteggio++;
    } while (x!=numero);

    printf("Hai indovinato\n");
    printf("Numero di tentativi %d", conteggio);
    return 0;
}