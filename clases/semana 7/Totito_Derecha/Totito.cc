#include "Totito.hh"
#include "Pieza.hh"

Totito::Totito(){
	turno = Pieza;
	turnos = 0;
}
bool Totito::colocarPieza(int x, int y){
	if(colocarPieza(turno, x, y))
	{
		turnos++;
		if(turno == Pieza.X)
		{
			turno = Pieza.O;
			return true;
		}if(turno == Pieza.O)
		{
			turno = Pieza.X;
			return true;
		}
	}else
	{
		return false;
	}
}
bool Totito::termino()
{
	if((turnos==9)||(ganador()!=Pieza.Nada)){
		return true;
	}else{
		return false;
	}
	
}
Pieza Totito::ganador()
{
	if((gano != Pieza.Nada)){
		termino(); 
	}
}
