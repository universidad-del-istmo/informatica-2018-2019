int main(){
    std::vector<int> valores { 3,5,7,9 };
    std::function<bool(int)> esPar = [](int valor){ return valor % 2 == 0; };
    std::function<bool(int)> esImpar = [](int valor){ return valor % 3 == 0; };

    if(!find<int>(esPar, valores)){
        printf("No hay numeros pares\n");
    }

    if(find<int>(esImpar, valores)){
        printf("Si hay numeros impares\n");
    }
}