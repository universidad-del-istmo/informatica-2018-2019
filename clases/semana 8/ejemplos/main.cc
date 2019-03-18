#include <stdio.h>

#include "Container.hh"
#include "Lista.hh"
#include "Vector.hh"

double promedio(Container& valores){

    double resultado = 0;
    for(int i = 0; i < valores.size(); i++){
        resultado += valores[i];
    }

    return resultado / valores.size();
}

int main(){
    Vector v(3);
    v[0] = 1;
    v[1] = 5;
    v[2] = -8;

   printf("El resultado es %f.\n", promedio(v));

    Lista lista(2);
    lista.valor() = 5;
    lista.next()->valor() = 6;
    printf("El valor 1 es %f\n", lista.valor());
    printf("El valor 2 es %f\n", lista.next()->valor());
}