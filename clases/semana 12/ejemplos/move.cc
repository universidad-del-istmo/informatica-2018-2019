#include <iostream>
#include <stdio.h>

class Vector{
    
    public:
    /*
    Vector(int _cantidad):
        cantidad(_cantidad){
        printf("Constructor ordinario\n");
        numeros = new int[cantidad];
    }
    */

    Vector(int& _cantidad):
        cantidad(_cantidad){
        printf("Constructor ordinario\n");
        numeros = new int[cantidad];
    }

    Vector(int&& _cantidad):
        cantidad(_cantidad){
        printf("Constructor ordinario r-value\n");
        numeros = new int[cantidad];
    }

    Vector(const Vector& otro){

        printf("Copy constructor\n");
        cantidad = otro.cantidad;
        //delete[] numeros;
        numeros = new int[cantidad];

        for(int i = 0; i < cantidad; i++){
            numeros[i] = otro.numeros[i];
        }
    }

    Vector(Vector&& otro){
        printf("Move constructor\n");
        cantidad = otro.cantidad;
        numeros = otro.numeros;
        otro.cantidad = 0;
        otro.numeros = NULL;
    }

    ~Vector(){
        for(int i = 0; i < cantidad; i++){
            numeros[i] = 0;
        }

        delete[] numeros;
    }

/*
    Vector& operator=(const Vector& otro){
        printf("Se asigno el vector\n");


        return *this;
    }
*/
    int& operator[](int i){
        return numeros[i];
    }

    public:
    int* numeros;
    int cantidad;
};

void fun(Vector vec){

}

int main(){
    int x = 7;
    Vector v1(x);
    int valor;
    v1[0]= 42;
    v1[1] = 5;

    if(true){
        Vector v(5);
        fun(v);
        printf("La longitud de v es %i\n", v.cantidad);
        fun(std::move(v));
        printf("La longitud de v es %i\n", v.cantidad);
    }
    /*
    std::cin >> valor;

    if(valor > 5){
        Vector v2(5);
        v2 = v1;
        //v2 = v1;
        printf("El numero de v2 es %i\n", v2[0]);
    }

    printf("El numero de v1 es %i\n", v1[0]);
    */
}





