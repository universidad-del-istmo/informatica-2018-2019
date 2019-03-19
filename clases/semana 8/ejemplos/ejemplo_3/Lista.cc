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

