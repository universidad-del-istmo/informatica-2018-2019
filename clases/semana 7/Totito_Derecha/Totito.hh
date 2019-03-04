#pragma once
#include "Pieza.hh"
#include "Tablero.hh"

class Totito{
    public:
    Totito();
    bool colocarPieza(int x, int y);
    bool termino();
    Pieza ganador();

    private:
    Tablero tablero;
    Pieza turno;
    int turnos;
	bool gano = false;
};