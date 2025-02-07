#include <math.h>
#include "operations01.h"

int add(int number1, int number2) {
    return number1 + number2;
}

int sub(int number1, int number2) {
    return number1 - number2;
}

int mul(int number1, int number2) {
    return number1 * number2;
}

float divi(int number1, int number2) {
    if (number2==0) printf("Errore");
    return number1 / number2;
}

int mod(int number1, int number2) {
    return number1 % number2;
}

int power(int number1, int number2) {
    return pow(number1,number2);
}