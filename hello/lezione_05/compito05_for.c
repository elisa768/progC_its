/*
legga un numero intero positivo N dall'utente e stampi un triangolo di numeri con N righe
per tutti i cicli utilizzare il for
controllare che l'input inserito dall'utente sia positivo; in caso contrario, richiedi di reinserire il valore
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N,i,j;
    do {
        printf("Inserisci un numero: ");
        scanf("%d", &N);
    } while (N<0);
   for (i=1; i<=N; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}