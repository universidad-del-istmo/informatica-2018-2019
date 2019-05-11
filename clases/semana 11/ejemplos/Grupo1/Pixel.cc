#include "Pixel.hh"

Pixel Pixel::operator*(const double otro) const{
    return { x*otro, y*otro };
}

Pixel Pixel::operator+(const Pixel& otro) const{
    return {x + otro.x, y + otro.y};
}

Pixel Pixel::operator-(const Pixel& otro) const{
    return *this + (otro*-1);
}