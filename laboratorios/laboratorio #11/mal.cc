class Sumar{
    int operator()(int a, int b){
        return a + b;
    }
};

int main(){
    std::vector<int> valores{1,2,3,4,5};
    Sumar sumar;

    // Imprime 15 (osea 1+2+3+4+5)
    printf("El resultado es %d\n", fold<int, int>(sumar, 0, valores));
}