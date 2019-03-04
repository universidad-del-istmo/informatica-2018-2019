#include "stdio.h"

#include "Totito.hh"

int main(){
    Totito totito;

    while(!totito.termino()){
        int x;
        int y;
        std::printf("Ingrese la fila donde desea colocar su pieza \n");
        cin >> x;
        std::printf("Ingrese la columna donde desea colocar su pieza \n");
        cin >> y;

        if(totito.colocarPieza(x, y)){
            std::printf("Ahora es el turno del otro jugador\n");
        }else{
            std::printf("Posicion incorrecta, vuelbe a intenter\n");
        }
    }

    switch(totito.ganador()){
        case Pieza.X:
            std::printf("El ganador ha sido 'X'\n");
            break;
        case Pieza.Y:
            std::printf("El ganador ha sido 'Y'\n");
            break:
        default:
            std::printf("Ha sido un empate.");
    }

    return 0;
}