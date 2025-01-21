/*
1 Stampi un messaggio introduttivo con il proprio nome e cognome
2 Chieda all'utente di inserire la categoria e il peso in kg. del dispositivo elettronico da riciclare
3 Stampi un messaggio che indichi qual è il peso in kg. che è possibile riciclare e qual è il peso del materiale da buttare
4 Le percentuali da utilizzare per calcolare i vari pesi sono le seguenti
R1, 85% di materiale recuperabile
R2, 75% di materiale recuperabile
R3, 65% di materiale recuperabile
R4, 50% di materiale recuperabile
R5, 40% di materiale recuperabile
*/

#include <stdio.h>
#include <string.h>
#define stampa_nome(nome) scanf("%s", nome)
#define stampa_cognome(cognome) scanf("%s", cognome)
#define R1 0.85
#define R2 0.75
#define R3 0.65
#define R4 0.50
#define R5 0.40

int main(){
    
    /*char nome[40], cognome[40];
    printf("Inserisci nome: ");
    stampa_nome(nome);
    printf("Inserisci cognome: ");
    stampa_cognome(cognome);*/
    double quantita;
    double categoria;
    scanf("Inserisci categoria: %lf",&categoria);
    scanf("Inserisci quantità: %lf",&quantita); // lf è long float
    double recuperabile = categoria*quantita;
    double irrecuperabile = quantita-recuperabile;
    printf("Recuperabile: %f", recuperabile);
    printf("Non recuperabile: %f", irrecuperabile);
    return 0;
}