/* 
Scrivere un programma in C che:

Stampi un messaggio introduttivo con il proprio nome e cognome
Chieda all'utente di inserire la categoria e il peso in kg. del dispositivo elettronico da riciclare
Stampi un messaggio che indichi qual è il peso in kg. che è possibile riciclare e qual è il peso del materiale da buttare
Le percentuali da utilizzare per calcolare i vari pesi sono le seguenti
R1, 85% di materiale recuperabile
R2, 75% di materiale recuperabile
R3, 65% di materiale recuperabile
R4, 50% di materiale recuperabile
R5, 40% di materiale recuperabile
Specifiche del Programma

Usare #include <stdio.h> per l'input e l'output
Usare #include <string.h> per la gestione delle stringhe
Uso degli operatori matematici, logici
Uso del tipo double per i calcoli
La funzione main() deve includere:
dichiarazione di macro per il nome, il cognome
dichiarazione di macro per le percentuali di recupero
dichiarazione di macro per gestire le categorie
utilizzo di printf per stampare i messaggi e scanf per leggere i dati
utilizzo di \n per organizzare l'output su più righe
*/

#include <stdio.h>
#include <string.h>
#define stampa_nome(Nome) printf("%s", #Nome)
#define R1 0.85*peso
#define R2 0.75*peso
#define R3 0.65*peso
#define R4 0.50*peso
#define R5 0.40*peso

int main(){
    stampa_nome("Elisa Scantamburlo");
    int categoria;
    float peso;
    printf("Inserisci peso: ");
    scanf("%f", &peso);

    do {
        printf("Inserisci categoria: ");
        scanf("%d", &categoria);
    } while(categoria>5);
    switch (categoria)
    {
    case 1:
        printf("Peso: %f", peso);
        printf("Quantità riciclabile: %f", R1);
        printf("Quantità non riciclabile: %f", peso-R1);
        break;
    case 2:
        printf("Peso: %f", peso);
        printf("Quantità riciclabile: %f", R2);
        printf("Quantità non riciclabile: %f", peso-R2);
        break;
    case 3:
        printf("Peso: %f", peso);
        printf("Quantità riciclabile: %f", R3);
        printf("Quantità non riciclabile: %f", peso-R3);
        break;
    case 4:
        printf("Peso: %f", peso);
        printf("Quantità riciclabile: %f", R4);
        printf("Quantità non riciclabile: %f", peso-R4);
        break;
    case 5:
        printf("Peso: %f", peso);
        printf("Quantità riciclabile: %f", R5);
        printf("Quantità non riciclabile: %f", peso-R5);
        break;
    default:
        printf("Categoria non valida");
        break;
    }

    

    return 0;
}