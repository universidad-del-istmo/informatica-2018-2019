#include <iostream>

struct Array{
    int sz;
    int* valores;
};

Array crear(int sz){
    Array resultado;
    resultado.sz = sz;
    resultado.valores = new int[sz];
    return resultado;
}

int productoPunto(Array x, Array y){

    if(x.sz != 2 && y.sz != 2){
        return 0;
    }

    return x.valores[0] * y.valores[0] + x.valores[1] + y.valores[1];
}

void llamadaPorNombre(Array x){
    x.sz = 3;
}

void llamadaPorValor(Array& x){
    x.sz = 3;
}

void llamadaPorPuntero(Array* x){
    x->sz = 3;
}

int main(){

    Array arreglo = crear(5);
    arreglo.valores[3] = 3;
    Array arreglo2 = crear(6);
    arreglo2.valores[3] = 42;

    printf("El tercer valor es %i\n", arreglo.valores[3]);
    printf("El tercer valor es %i\n", arreglo2.valores[3]);

    Array arreglo3 = crear(5);

    llamadaPorNombre(arreglo3);
    printf("El tamano es %i\n", arreglo3.sz);

    llamadaPorValor(arreglo3);
    printf("El tamano es %i\n", arreglo3.sz);
}