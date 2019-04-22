#include <functional>
#include <stdio.h>
#include <string>

void ejecutar(std::function<void(int x)> f){
    for(int i = 0; i < 10; i++)
        f(i);
}

int main(){

    std::string mensaje = "hola mundo";

    std::function<void(int x)> f = [
        valor = 0,
        &mensaje](int x) mutable{
            printf("%s %i, %i\n", mensaje.c_str(), x, valor++);
    };

    ejecutar(f);

    mensaje = "adios mundo";

    ejecutar(f);
}