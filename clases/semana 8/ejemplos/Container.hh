#pragma once

class Container{

    public:
    virtual double& operator[](int i) = 0;
    virtual int size() const = 0;
};