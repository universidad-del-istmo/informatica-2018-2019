/* Kurth Aguilar
 * Evelyn Dubon
 * Gerardo Morales
 * Gabriel Chavarria*/
#include "Lista.hh"

Lista::Lista(int _size){
    if(_size == 1){
        _next = nullptr;
    }else{
        _next = new Lista(_size - 1);
    }
}

Lista::~Lista(){
    if(_next != nullptr){
        delete _next;
    }
}

double& Lista::valor(){
    return _valor;
}

Lista* Lista::next() const{
    return _next;
}


//implementacion

double& Lista::operator[](int i){
    if(size() == 0){
    return _valor;
    }
    else{
    return (*_next)[i-1];
    }
}

int Lista::size() const{
    if(_next == nullptr){
        return 0;

    }else {
        return 1+_next->size(); 
    }
}


