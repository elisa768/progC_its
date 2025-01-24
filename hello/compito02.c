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
#define Nome "Elisa Scantamburlo"
#define stampa_nome printf("%s\n",Nome)
#define R1 0.85
#define R2 0.75
#define R3 0.65
#define R4 0.50
#define R5 0.40
#define NEW_LINE printf("\n")

int main(){
    stampa_nome;
    char categoria[3];
    printf("Inserisci categoria: ");
    scanf("%2s", categoria);

    double quantita=0;
    printf("Inserisci quantita': ");
    scanf("%lf", &quantita);

    NEW_LINE;
    
    printf("%.2lf", quantita);

    NEW_LINE;

    if (strcmp(categoria, "R1")==0) {
        printf("quantita' recuperabile: %.2lf", R1*quantita);
        NEW_LINE;
        printf("quantita' irrecuperabile: %.2lf", (1-R1)*quantita);
    }

    else if (strcmp(categoria, "R2")==0) {
        printf("quantita' recuperabile: %.2lf", R2*quantita);
        NEW_LINE;
        printf("quantita' irrecuperabile: %.2lf", (1-R2)*quantita);
    }

    else if (strcmp(categoria, "R3")==0) {
        printf("quantita' recuperabile: %.2lf", R3*quantita);
        NEW_LINE;
        printf("quantita' irrecuperabile: %.2lf", (1-R3)*quantita);
    }

    else if (strcmp(categoria, "R4")==0) {
        printf("quantita' recuperabile: %.2lf", R4*quantita);
        NEW_LINE;
        printf("quantita' irrecuperabile: %.2lf", (1-R4)*quantita);
    }

    else if (strcmp(categoria, "R5")==0) {
        printf("quantita' recuperabile: %.2lf", R5*quantita);
        NEW_LINE;
        printf("quantita' irrecuperabile: %.2lf", (1-R5)*quantita);
    }

    NEW_LINE;

    return 0;
}