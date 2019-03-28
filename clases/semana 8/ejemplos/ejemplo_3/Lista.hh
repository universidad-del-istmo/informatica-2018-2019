#pragma once

class Lista{
    public:
    Lista(int _size);
    ~Lista();
    double& valor();
    Lista* next() const;

    private:
    double _valor;
    Lista* _next;
};