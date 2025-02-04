/*
Legga da tastiera il giorno della settimana (come stringa) e la spesa effettuata in quel giorno.
Usi una macro per calcolare l'IVA (22%) sulla spesa.
Usi una struttura di controllo if-else per distinguere i giorni feriali da quelli festivi.
Stampi il totale delle spese con e senza IVA, specificando se il giorno è feriale o festivo.
*/

#include <stdio.h>
#include <string.h>
#define IVA 0.22*spesa

int main(){
    char giorno[10];
    float spesa;
    printf("Inserire giorno della settimana: ");
    scanf("%s", giorno);
    char last_char = giorno[strlen(giorno)-1];
    if (last_char=="i" ) {
        printf("Feriale");
    }
    else printf("Festivo");

    
    printf("Spesa senza IVA: ");
    scanf("%f", &spesa);
    printf("Spesa con IVA: ");
    printf("%f", spesa+IVA);

    return 0;
}