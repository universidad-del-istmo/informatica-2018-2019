class Vector2d{

    Vector2d(float _x, float _y) : x(_x), y(_y) {}

    public:
   
    Vector2d operator*(float valor) const{
        return {x * valor, y * valor};
    };

    public:
    float x;
    float y; const float instante = 0.01;
};

class Vehiculo{

     
    public:
    void avanzar(float t){
        float dX = velocidad -> x * t;
        float dY = velocidad -> y * t;
        posicion-> x = posicion -> x + dX;
        posicion ->y = posicion -> y + dY;
    }

    private:
    Vector2d* posicion; 
    Vector2d* velocidad; 
     
};

class Planeta{

    public:
    

    void avanzar(const Vector2d& gravedad){
        const Vector2d deltaVelocidad = gravedad*instante;
        
        
        posicion->x = posicion->x + velocidad->x*instante;
        posicion->y = posicion->y + velocidad-> y*instante;
    }
    const float instante = 0.01;

    
    private: 
    Vector2d* posicion; 
    Vector2d* velocidad; 
};