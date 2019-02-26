class Vector2d{

    Vector2d(float _x, float _y) : x(_x), y(_y) {}

    public:
    Vector2d operator*(float valor) const{
        return {x * valor, y * valor};
    };
    float x;
    float y;
};

class Vehiculo{

    public:
    void avanzar(float t){
        float dX = vel.x * t;
        float dY = vel.y * t;
        pos.x = pos.x + dX;
        pos.y = pos.y + dY;
    }

    private:
    Vector2d pos;
    Vector2d vel;
};

class Planeta{

    private:

    void avanzar(const Vector2d& gravedad){
        const Vector2d deltaVelocidad = gravedad*instante;
        pos.x = pos.x + vel.x*instante;
        pos.y = pos.y + vel.y*instante;
    }

    const float instante = 0.01;
    Vector2d pos;
    Vector2d vel;
};