#pragma once

#include <vector>

#include "Figura.hh"

class Poligono : Figura{

    virtual std::vector<Pixel> esquinas() const = 0;

    virtual std::vector<Pixel> render() const override;
}