#include "Comparador2.hh"

  Orden Longitud::comparar(const std::string& s1, const std::string& s2) const{

        int tam = s1.size() < s2.size() ? s1.size() : s2.size();
            if (s1.length() > s2.length()){
                return Orden::MAQ;
            }else if (s1.length() < s2.length()){
                return Orden::MEQ;
            }else{
                return Orden::IG;
            }
    }