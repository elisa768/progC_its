/*
Definisca questo array di 6 stringhe inizializzato staticamente:
 
 {"apple", "banana", "123hello", "Aardvark", "racecar", "world"}
      

Analizzi le stringhe e stampi:
Quante stringhe iniziano con la lettera 'A' o 'a'.
Quante stringhe contengono almeno un numero (0-9).
La stringa più lunga e la stringa più corta.
Il numero di stringhe palindrome (uguali se lette al contrario).
Stampi un messaggio se tutte le stringhe sono lunghe più di 5 caratteri o se tutte le stringhe contengono almeno una vocale.
*/

#include <stdio.h>
#include <string.h>

int main(){
    int conta_A=0;
    int conta_numeri=0;
    char array[6][20] = {"apple", "banana", "123hello", "Aardvark", "racecar", "world"};
    //conteggio stringhe che iniziano per A e a
    for (int i=0; i<6; i++){
        if((array[i][0]=='a') || (array[i][0]=='A')) conta_A++;
    }
    printf("Quante stringhe iniziano per A o a? %d\n", conta_A++);
    return 0;
}