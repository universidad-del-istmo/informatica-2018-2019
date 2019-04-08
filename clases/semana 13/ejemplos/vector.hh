#pragma once

#include <string>

template<typename T>
class Vector{
    public:
    Vector(const int __size): _size(__size){
        valores = new T[__size];
    }

    ~Vector(){
        delete[] valores;
    }

    T& operator[](const int i){
        return valores[i];
    }

    bool existe(const T& valor) const{
        for(int i = 0; i < _size; i++){
            if(valores[i] == valor){
                return true;
            }
        }

        return false;
    }

    void imprimir(){
        for(int i = 0; i < _size; i++){
            printf(valores[i].c_str());
        }
    }

    const int size() const{
        return _size;
    }

    private:
    int _size;
    T* valores;
};