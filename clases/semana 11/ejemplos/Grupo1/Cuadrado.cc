#include "Cuadrado.hh"

std::vector<Pixel> Cuadrado::esquinas() const{

    return {
        {0,0},
        {1,0},
        {1,1},
        {0,1}
        
    };
}