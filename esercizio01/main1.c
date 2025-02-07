#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "operations.h"

int main(){
    int numbers[]= {2, 4, 6, 8, 10};
    int number1, number2;
    //we ask the user to choose two numbers
    printf("Inserisci il primo numero: ");
    scanf("%d", &number1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &number2);
    int operation = 0;
    do {
        printf("Inserisci un'operazione: \n");

        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Modulo\n");
        printf("6. Potenza\n");
        printf("7. test di tutte le funzioni\n");
        printf("8. Esci\n");
        printf("Scegli un'operazione (1-8): ");
        bool error=false;
        scanf("%d", &operation);
        if ( operation == 8 )
        {
            break;
        }

        int result=0;
        float result_float=0.0;
        //switch-case that allows the user to choose between the operations
        if (operation>=1 && operation<=7){
            switch(operation) {
        
                case 1:
                    result = add(number1,number2);
                    printf("Risultato: %d", result);
                    break;
            
                case 2:
                    result = sub(number1,number2);
                    printf("Risultato: %d", result);
                    break;
            
                case 3:
                    result = mul(number1,number2);
                    printf("Risultato: %d", result);
                    break;
            
                case 4:
                    result_float = divi(number1,number1);
                    printf("Risultato: %f", result_float);
                    break;

                case 5:
                    result = mod(number1, number2);
                    printf("Risultato: %d", result);
                    break;
                case 6:
                    result = power(number1, number2);
                    printf("Risultato: %d", result);
                    break;
                
                case 7:
                    test_all_operations(numbers, sizeof(numbers));
                    break;
                default:
                    error = true;
                break;
            }  
        } 
        
    } while(operation!=8);
    return 0;
}
