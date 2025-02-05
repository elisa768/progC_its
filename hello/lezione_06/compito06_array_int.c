/*
Chieda all'utente di inserire 10 numeri interi e li memorizzi in un array.
Calcoli e stampi:
La somma di tutti i numeri positivi presenti nell’array.
La somma di tutti i numeri negativi presenti nell’array.
Il valore massimo e il valore minimo dell'array.
Il numero di elementi pari e il numero di elementi dispari presenti nell'array.
Stampi un messaggio se tutti i numeri inseriti sono positivi o tutti negativi.
Stampi un messaggio se almeno un numero è multiplo di 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size=10;
    int somma_positivi=0;
    int somma_negativi=0;
    int conteggio_pos=0;
    int conteggio_neg=0;
    int conteggio_pari=0;
    int conteggio_dispari=0;
    int mul_5=0;
    int array[size];
    int max_array=array[0];
    int min_array=array[0];

    // inserimento numeri nella sequenza e calcolo di somma dei positivi e di somma dei negativi
    for (int i=0; i<size; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &array[i]);
        if (array[i]>=0) somma_positivi+=array[i];
        else somma_negativi+=array[i];
    }
    // conteggio di numeri positivi e negativi
    for (int j=0; j<size; j++) {
        if (array[j]>=0) conteggio_pos++;
        else conteggio_neg++;

    }
    //facendo riferimento al for precedente, si stabilisce se i numeri sono tutti positivi, tutti negativi oppure entrambi
    if (conteggio_pos==size) printf("Numeri tutti positivi\n");
    else if (conteggio_neg==size) printf("Numeri tutti negativi\n");
    else printf("Sono presenti sia numeri positivi che negativi\n");
    printf("Somma numeri positivi: %d \n", somma_positivi);
    printf("Somma numeri negativi: %d \n", somma_negativi);

    //ciclo per stabilire valore massimo e minimo della sequenza
    for (int a=1; a<size; a++) {
        if (array[a]>max_array) max_array=array[a];
        if (array[a]<min_array) min_array=array[a];
    }

    printf("valore massimo: %d \n", max_array);
    printf("valore minimo: %d \n", min_array);

    for (int b=0; b<size; b++) {
        if (array[b]%2==0) conteggio_pari++;
        else conteggio_dispari++;
    }

    printf("Quanti numeri pari? %d \n", conteggio_pari);
    printf("Quanti numeri dispari? %d \n", conteggio_dispari);

    for (int z=0; z<size; z++) {
        if (array[z]%5==0) mul_5++;
    }
    if (mul_5>0) printf("Almeno un numero della sequenza è multiplo di 5\n");
    else printf("Nessun numero della sequenza è multiplo di 5\n");
    return 0;
}