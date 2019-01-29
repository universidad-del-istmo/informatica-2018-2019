#include <iostream>

int main(){
    int valor;
    printf("Ingrese el numero a considerar:\n");
    std::cin >> valor;

    bool esPrimo = false;
    int conteoDividen = 0;
    int contador = 1;

    while(contador <= valor){

        if(valor % contador == 0){
            conteoDividen++;
        }

        if(conteoDividen == 2){
            esPrimo = true;
        }else{
            esPrimo = false;
        }

        contador++;
    }

    if(esPrimo){
        printf("El numero %i es primo.\n", valor);
    }
}