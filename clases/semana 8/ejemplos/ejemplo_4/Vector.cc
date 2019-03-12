#include "Vector.hh"

#include <stdio.h>

Vector::Vector(int size) : _size(size), _valores{ new double[size] } {}

Vector::~Vector(){

    printf("Se destruyo\n");
    delete[] _valores;
}

double& Vector::operator[](int i){
    return _valores[i];
}

int Vector::size() const{
    return _size;
}
