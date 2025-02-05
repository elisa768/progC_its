/*
Definisca questa matrice 3x4 di numeri in virgola mobile (float) e la inizializzi staticamente nel codice:
 

  1.5  −6.8   10.0
 −3.2   7.1  −11.3
  4.0  −8.4   12.6
  5.5   9.9  −13.7

Calcoli e stampi:
La somma di tutti i numeri positivi presenti nella matrice.
La somma di tutti i numeri negativi presenti nella matrice.
Il valore massimo e il valore minimo della matrice.
Il numero di elementi pari e il numero di elementi dispari (considerando solo la parte intera del numero).
Stampi un messaggio se tutti i numeri nella matrice sono positivi o tutti negativi.
Stampi un messaggio se almeno un numero è multiplo di 5 (considerando solo la parte intera del numero).
*/

#include <stdio.h>
#include <float.h>
#include <stdbool.h>

int main(){
    float somma_pos=0;
    float somma_neg=0;
    
    int conteggio_pari=0;
    int conteggio_dispari=0;

    int positivi=0, negativi=0;
    float matrix [4][3] = {
        {1.5,  -6.8,   10.0},
        {-3.2,   7.1,  -11.3},
        {4.0,  -8.4,   12.6},
        {5.5,   9.9,  -13.7}
    };
    float max_matrix=matrix[0][0], min_matrix=matrix[0][0];
    //calcolo della somma di numeri positivi e di numeri negativi
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            if(matrix[i][j]>=0) somma_pos+=matrix[i][j];
            else somma_neg+=matrix[i][j];
        }
    }
    printf("Somma numeri positivi: %f\n", somma_pos);
    printf("Somma numeri positivi: %f\n", somma_neg);

    for (int a=0; a<4; a++) {
        for (int b=1; b<3; b++) {
            if (matrix[a][b]>max_matrix) max_matrix=matrix[a][b];
            if (matrix[a][b]<min_matrix) min_matrix=matrix[a][b];
        }
    }
    printf("Massimo valore nella matrice: %f\n", max_matrix);
    printf("Minimo valore nella matrice: %f\n", min_matrix);

    for (int x=0; x<4; x++){
        for (int y=0; y<3; y++) {
            int f = matrix[x][y];
            if (f%2==0) conteggio_pari++;
            else conteggio_dispari++;
        }
    }

    printf("Quanti numeri pari? %d\n", conteggio_pari);
    printf("Quanti numeri dispari? %d\n", conteggio_dispari);

    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            if (matrix[i][j]>=0) positivi++;
            else negativi++;
        }
    }
    if (positivi==12) printf("Matrice di numeri positivi\n");
    else if (negativi==12) printf("Matrice di numeri negativi\n");
    else printf("La matrice contiene sia numeri positivi che negativi");
    return 0;
}