#include <iostream>
#include <stdio.h>

class Vector{
    
    public:
    Vector(int _cantidad):
        cantidad(_cantidad){
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

    private:
    int* numeros;
    int cantidad;
};

int main(){
    Vector v1(5);
    int valor;
    v1[0]= 42;
    v1[1] = 5;

    std::cin >> valor;

    if(valor > 5){
        Vector v2(5);
        v2 = v1;
        //v2 = v1;
        printf("El numero de v2 es %i\n", v2[0]);
    }

    printf("El numero de v1 es %i\n", v1[0]);
}





