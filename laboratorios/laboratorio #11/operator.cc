class Sumar{
    int operator()(int a, int b){
        return a + b;
    }
};

int main(){
    Sumar sumar;
    printf("La suma de 1 + 2 es %d\n", sumar(1,2));
}