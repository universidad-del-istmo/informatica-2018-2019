int main(){
    std::vector<int> valores{1,2,3,4,5};
    std::function<int(int, int)> sumar = [](int x, int y){ return x + y; };

    // Imprime 15 (osea 1+2+3+4+5)
    printf("El resultado es %d\n", fold<int, int>(sumar, 0, valores));
}