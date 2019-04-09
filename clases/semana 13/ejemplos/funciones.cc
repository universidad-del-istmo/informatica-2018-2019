#include <stdio.h>
#include <string>
#include <vector>

#include "vector.hh"


template<typename R, typename T>
R& head(T& valores){
    return valores[0];
}

template<typename T>
bool contains(
    std::vector<T> conjunto,
    std::vector<T> valores){
    
    for(int i = 0; i < conjunto.size(); i++){
        bool existe = false;
        for(int j = 0; j < valores.size(); j++){
            if(conjunto[i] == conjunto[j]){
                existe = true;
            }
        }
        if(!existe){
            return false;
        }
    }

    return true;
}

class MiClase{
    public:
    bool operator==(const MiClase&) const{
        return true;
    }
};

int main(){
    int valores[] = { 1, 2, 3 };
    int& valor = head<int>(valores);

    printf("El valor es %d\n", valor);

    std::string strs[] = { "hola" };
    std::string& str = head<std::string>(strs);

    printf("El str es %s\n", str.c_str());

    Vector<int> vec(5);
    vec[0] = 42;

    auto& vec0 = head<int>(vec);

    std::vector<std::string> vcpp;
    std::string& svcpp = head<std::string>(vcpp);

    std::vector<int> xs = {1,2};
    std::vector<int> ys = {5,4,3,2,1};

    contains(xs, ys);

    std::vector<MiClase> as;
    std::vector<MiClase> bs;

    /*
    Es necesario definir el operador == para
    poder llamar contains con un vector
    de MiClase
    */
    contains(as, bs);
}