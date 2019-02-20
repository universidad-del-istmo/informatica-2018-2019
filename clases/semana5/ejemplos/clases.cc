#include <iostream>

class Array{

    public:
    Array(int sz){
        this->sz = sz;
        valores = new float[sz];
    }

    ~Array(){
        delete valores;
        std::printf("Destructor!! %i\n", sz);
    }

    float get(int ix){
        return valores[ix];
    }

    float operator[](int ix){
        return valores[ix];
    }

    void set(int ix, float valor){

        if(ix < sz){
            valores[ix] = valor;
        }
    }

    private:
    float* valores;
    int sz;
};

int main(){

    Array x(5);

    if(true){
        Array y(6);
    }

    Array z(7);
    z.set(1,42);

    std::printf("El valor es %f \n", z[1]);
}