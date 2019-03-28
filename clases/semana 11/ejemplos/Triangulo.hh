#pragma once

#include "Poligono.hh"

class Triangulo : Poligono{

    virtual std::vector<Pixel> esquinas() const override;
};