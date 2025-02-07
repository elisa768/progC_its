#include "operations.h"

int add(int a, int b){
    return a+b;
};
int sub(int a, int b){
    return a-b;
};
int mul(int a, int b){
    return a*b;
};
float divi(int a, int b){
    if (b==0) {
        printf("Errore");
        return -1;
    }
    return a/b;
};
int mod(int a, int b){
    if (b==0){
        printf("Errore");
        return -1;
    }
    return a%b;
};
int power(int a, int b){
    int result=1;
    for (int i=1; i<=b; i++) {
        result *= a;
    }
    return result;
};

void test_all_operations(int arr[], int size){
    if (size < 2) {
        printf("Array troppo piccolo\n");
        return -1;
    }
    for (int i=0; i < size; i++){
        int x = arr[i];
        int y = arr[i+1];

        printf("Operazioni tra %d e %d:\n", x, y);

        printf ("Somma tra %d e %d: ", x, y, add(x,y));

        printf("Sottrazione tra %d e %d: ", x, y, sub(x,y));

        printf("Moltiplicazione tra %d e %d: ", x, y, mul(x,y));

        printf("Divisione tra %d e %d: ", x, y, divi(x,y));

        printf("%d modulo %d: ", x, y, mod(x,y));

        printf("%d elevato a %d", x, y, power(x,y));
    }

    

}