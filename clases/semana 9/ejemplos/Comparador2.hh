// Mario Yon, Josue Morales, Brandon Rodriguez, Kurth Aguilar, Evelyn Dubon
#include "Comparador.hh"

class Longitud : public Comparador {
    
    public:

    virtual ~Longitud(){

        printf("Se destruyo\n");

    }



    virtual Orden comparar(const std::string& s1, const std::string& s2) const override; 
};