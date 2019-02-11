#include <iostream>

int main(){

    int a = 42;

    int x;
    int* y;

    x = a;
    y = &a;

    int z = *y;

    printf("Valor de z es %i\n", y);

    int i = 10;
    int j = 15;
    int* k = &j;
    int* l = &i;
    j = 3;

    int** m = &k;
    int n = **m;

    printf("El valor de j es %i\n", j);
    printf("El valor de m es %i\n", m);
}