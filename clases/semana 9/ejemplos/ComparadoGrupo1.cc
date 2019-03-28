#include <string>

#include "Comparador.hh"
//Carlos Solares, gabriel chavarria,Sliven Carranza, Jorge Marroquin, Juan Cáceres


class Long: public Comparador{
    virtual Orden comparar(const std::string& s1, const std::string& s2) const override{
        if (s1.size<s2.size){
                return Orden::MEQ;
        }else if(s1.size>s2.size){
            return Orden::MAQ;
        }
        return Orden::IG;
    }
};
