#pragma once

#include "Container.hh"

class Vector : public Container{
    public:
    Vector(int size);
    ~Vector();
    virtual double& operator[](int ix) override;
    virtual int size() const override;

    private:
    int _size;
    double* _valores;
};