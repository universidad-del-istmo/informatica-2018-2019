int main(){
    std::string ex1("2*3+5");
    std::string ex2("2*mal+3");
    int resultado;
    Arith sem1;
    ZArith sem2(5);

    if(evaluar(sem1, ex1, resultado)){
        // Imprime: "El resultado es '11'"
        printf("El resultado es '%i'", resultado);
    }

    if(evaluar(sem2, ex1, resultado)){
        // Impirme: "El resultado es '2'"
        printf("El resultado es '%i'", resultado);
    }

    if(!evaluar(sem1, ex2, resultado)){
        // Imprime: "No se pudo evaluar ex2"
        printf("No se pudo evaluar ex2".);
    }
}