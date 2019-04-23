#include <functional>
#include <stdio.h>
#include <string>
#include <vector>




/*
1) Simple, toma vector de int y retorna vector de int
2) Utilizen plantillas para que funcione con vectores de cualquier tipo
3) Acepta cualquier collecion y transfrma sus valores
*/
std::vector<> map(std::vector<>& valores, std::function<> transformacion){

}


bool existe(
    const std::vector<int>& valores,
    const std::function<bool(int)>&& cond){
    for(int i = 0; i < valores.size(); i++){
        if(cond(valores[i])){
            return true;
        }
    }

    return false;
}

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

    std::vector<int> v{3,5,7,8};
    std::function<bool(int)> cond = [](int i){ return i % 2 == 0;};

    if(existe(v, [](int i){ return i % 2 == 0;})){
        printf("Si hay numero par\n");
    }

    if(existe(v, std::move(cond))){
        printf("Si hay numero par\n");
    }

    map(v, [](int i){ return i + 1; }); // {4,6,8,9}

}