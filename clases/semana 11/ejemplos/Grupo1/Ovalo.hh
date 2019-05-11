#pragma once

#include <vector>

#include "Figura.hh"

class Ovalo : Figura{

    Ovalo(std::vector<Pixel> a, std::vector<Pixel> b);

    virtual std::vector<Pixel> render() const override;

    std::vector<Pixel> _a;
    std::vector<Pixel> _b;
};