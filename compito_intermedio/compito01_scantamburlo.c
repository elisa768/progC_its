/*
Chieda all'utente due numeri interi e un'operazione da eseguire tra le seguenti: +, -, *, /, %, ^ (dove ^ rappresenta l'operazione di elevamento a potenza).

Il programma deve definire e usare sei funzioni separate per ciascuna operazione matematica:

int add(int, int) → somma due numeri
int sub(int, int) → sottrae due numeri
int mul(int, int) → moltiplica due numeri
float divi(int, int) → divide due numeri (gestendo il caso di divisione per zero)
int mod(int, int) → calcola il resto della divisione intera (gestendo il caso di modulo per zero)
int power(int, int) → calcola la potenza (usando un ciclo o la funzione pow della libreria math.h)
Dopo aver preso in input i numeri e l'operazione, il programma deve chiamare la funzione corrispondente e stampare il risultato.

Il codice deve essere organizzato in più file separati: un file per le funzioni e un file per il main.c.

l'elevamento a potenza deve essere realizzata usando la moltiplicazione

Il programma deve presentare un menù iniziale con le seguenti opzioni (visualizzato più volte finché l’utente non decide di uscire):

1. Addizione (+)
2. Sottrazione (-)
3. Moltiplicazione (*)
4. Divisione (/)
5. Modulo (%)
6. Potenza (^)
7. Test di tutte le funzioni
8. Esci
Scegli un'operazione (1-8):
*/

#include <stdio.h>
#include <string.h>
#include "operations01.c"
#include "operations01.h"

int main(){
    int number1=0, number2=0;
    printf("Inserire il primo numero: ");
    scanf("%d",&number1);
    printf("Inserire il secondo numero: ");
    scanf("%d",&number2); 
    printf("1. Addizione\n2. Sottrazione\n3. Moltiplicazione\n4. Divisione\n5. Modulo\n6. Potenza\n7. Test di tutte le funzioni\n8. Esci\n");   
    return 0;
}