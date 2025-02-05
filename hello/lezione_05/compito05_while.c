/*
chieda all'utente di inserire una sequenza di numeri interi positivi; il programma deve calcolare la somma dei numeri, il massimo numero inserito e la lunghezza della sequenza
l'input termina quando l'utente inserisce il numero 0 (lo zero non deve essere incluso nei calcoli)
se l'utente inserisce un numero negativo, il programma deve ignorarlo e chiedere un altro numero.
dopo che l'utente termina la sequenza, il programma deve stampare: la somma totale dei numeri, il numero massimo inserito, la lunghezza della sequenza (escludendo i numeri negativi e lo zero)
se l'utente non inserisce alcun numero valido prima di inserire 0, il programma deve stampare un messaggio adeguato, ad esempio: "Nessun numero valido inserito"
utilizzare il ciclo while
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=1, N=0, max=0, count=0;
    while (n>0) {
        printf("Inserisci numero: ");
        scanf("%d", &n);
        N+=n;
        if (n>max) max=n;
        count++;
    }
    printf("Somma: %d\n", N);
    printf("Massimo: %d\n", max);
    printf("Lunghezza sequenza %d", count-1);
    return 0;
}