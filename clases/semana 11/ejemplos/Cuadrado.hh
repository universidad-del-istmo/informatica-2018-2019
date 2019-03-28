#pragma once
#include "Poligono.hh"

class Cuadrado : Poligono{

    virtual std::vector<Pixel> esquinas() const override;
};