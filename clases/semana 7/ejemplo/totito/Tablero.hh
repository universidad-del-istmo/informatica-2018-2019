#pragma once
#include "Pieza.hh"

class Tablero{

    public:
    Tablero();
    ~Tablero();
    bool colocarPieza(Pieza pieza, int x, int y);
    bool gano(Pieza pieza);

    private:
    Pieza[][] piezas;
};