#include <stdio.h>

#include "vector.hh"

class MiClase{

};

int main(){
    Vector<int> v(5);

    v[0] = 1;
    v[1] = 42;
    v[2] = 1 + 3;
    v[3] = v[0] + v[1];

    Vector<std::string> v2(5);
    v2[0] = "hola";

    printf("El valor en [1] es %d\n", v[1]);
    printf("El valor en v2[0] es %s\n", v2[0].c_str());

    if(v.existe(5)){
        printf("Se encontro el valor 5\n");
    }

    std::string target("hola");
    if(v2.existe(target)){
        printf("Se encontro el string hola\n");
    }

    v2.imprimir();
    v.imprimir();

    MiClase c;
    Vector<MiClase> v3(3);
    v3[0] = c;
    v3[1] = MiClase();

}