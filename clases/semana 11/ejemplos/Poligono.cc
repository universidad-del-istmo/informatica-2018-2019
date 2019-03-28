#include "Poligono.hh"

std::vector<Pixel> Poligono::render() const{
    std::vector<Pixel> pixeles;
    std::vector<Pixel> lados = esquinas();

    for(int i = 0; i < lados.size(); i++){
        int otro = (i + 1) % lados.size();
        Pixel intervalo = (lados[otro] - lados[i]) * 0.1;
        Pixel inicio = lados[i];

        for(int j = 0; j < 10; j++){
            pixeles.push_back(inicio);
            inicio = inicio + intervalo;
        }
    }

    return pixeles;
}