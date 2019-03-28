#include "Ovalo.hh"
#include "math.h"


Ovalo::Ovalo(std::vector<Pixel> a, std::vector<Pixel> b){
   _a = a;
   _b = b; 
}

std::vector<Pixel> Ovalo::render() const{
    std::vector<Pixel> pixeles;
    for(double i = this->_a*-1; i < this->_a; i+= 0.1)
    {
        
    }
    
}