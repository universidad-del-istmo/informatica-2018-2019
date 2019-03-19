int main(){
    std::string str1("12345");
    std::string str2("12345_mal");

    int resultado = 0;
    if(parse(str1, resultado)){
        // Imprime "Resultado 12345"
        printf("Resultado1 %i", num1);
    }

    if(!parse(str2, resultado)){
        // Imprimie "No se pudo parsear str2"
        printf("No se pudo parsear str2");
    }
}