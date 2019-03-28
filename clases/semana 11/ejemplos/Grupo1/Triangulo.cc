#include "Triangulo.hh"

std::vector<Pixel> Triangulo::esquinas() const{

    return {
        {0,0},
        {0.5,1},
        {1,0}
    };
}