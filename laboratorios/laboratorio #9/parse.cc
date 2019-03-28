int main(){
    std::string entrada("1+2*3");
    Expression* expr;

    // Si se llama a la funcion ''parse'' de la siguiente manera
    parse(entrada, expr);

    // Es equivalente a construir una expressoin de la siguiente manera
    Expression* expr2 = new Suma(new Valor(1), new Multiplicacion(new Valor(2), new Valor(3)));

    // Por lo tanto la siguiente linea impirme:
    // "La diferencia es 0.0"
    printf("La diferencia es %d", expr2->evaluar() - expr->evaluar());
}