#pragma once
#include "Container.hh"

class Lista : public Container{ 
    public:
    Lista(int _size);
    ~Lista();
    double& valor();
    Lista* next() const;

    virtual double& operator[](int ix) override;//
    virtual int size() const override;//


    private:
    int _size;
    double _valor;
    Lista* _next;
};