#include <string>

enum Comparar{
    MEQ,
    IG,
    MAQ
};

Comparar comparar(const std::string& s1, const std::string& s2){
    int tam = std::max<int>(s1.size(), s2.size());

    for(int i = 0; i < tam; i++){

        if(i >= s1.size()){
            return Comparar::MEQ;
        }

        if(i >= s2.size()){
            return Comparar::MAQ;
        }

        if(s1[i] < s2[i]){
            return Comparar::MEQ;
        }

        if(s1[i] > s2[i]){
            return Comparar::MAQ;
        }
    }

    return Comparar::IG;
}

std::string* minimo(std::string strs[], int size){
    if(size <= 0){
        return NULL;
    }

    std::string* resultado = strs;

    for(int i = 1; i<size; i++){
        if(comparar(strs[i], *resultado) == Comparar::MEQ){
            resultado = &strs[i];
        }
    }

    return resultado;
}

int main(int argc, char** argv){
    std::string strs[argc - 1];

    for(int i = 1; i < argc; i++){
        strs[i - 1] = std::string(argv[i]);
    }

    printf("El primer string %s.\n", minimo(strs, argc -1)->c_str());

    return 0;
}