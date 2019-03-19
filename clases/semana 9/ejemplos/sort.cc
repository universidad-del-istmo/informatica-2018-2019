#include <string>

#include "Comparador.hh"

class AlfaAsc : public Comparador{

    public:
    virtual ~AlfaAsc(){
        printf("Se destruyo\n");
    }

    virtual Orden comparar(const std::string& s1, const std::string& s2) const override{
        int tam = std::max<int>(s1.size(), s2.size());

        for(int i = 0; i < tam; i++){

            if(i >= s1.size()){
                return Orden::MEQ;
            }

            if(i >= s2.size()){
                return Orden::MAQ;
            }

            if(s1[i] < s2[i]){
                return Orden::MEQ;
            }

            if(s1[i] > s2[i]){
                return Orden::MAQ;
            }
        }

        return Orden::IG;
    }
};

std::string* minimo(Comparador& comparador, std::string strs[], int size){
    if(size <= 0){
        return NULL;
    }

    std::string* resultado = strs;

    for(int i = 1; i<size; i++){
        if(comparador.comparar(strs[i], *resultado) == Orden::MEQ){
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

    Comparador* cmp = new AlfaAsc();
    printf("El string menor alfabeticamente es '%s'.\n", minimo(*cmp, strs, argc -1)->c_str());
    delete cmp;

    Comparador* cmp2 = NULL;
    printf("El string menor por longitud es '%s'", minimo(*cmp2, strs, argc - 1)->c_str());
    delete cmp2;

    return 0;
}