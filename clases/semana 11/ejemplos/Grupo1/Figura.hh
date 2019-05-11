#pragma once

#include <vector>

#include "Pixel.hh"

class Figura{
    public:
    virtual std::vector<Pixel> render() const = 0;
};