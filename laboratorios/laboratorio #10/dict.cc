#include <string>

int main(){

    Diccionario<std::string, std::string> strs;
    strs["Universidad"] = "Universidad del Istmo";
    strs["Facultad"] = "Ingenieria";
    strs["Clase"] = "Informatica II";
    Iterator<std::string>* it = strs.iterador();
    std::string valor;

    while(it->valor(valor)){
        printf("Se almaceno ''%s''\n", valor.c_str());
        it->siguiente();
    }
    delete it;
}