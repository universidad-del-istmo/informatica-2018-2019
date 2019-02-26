class Vector2d{

    Vector2d(float _x, float _y) : x(_x), y(_y) {}

    public:
    Vector2d operator*(float valor) const{
        return {x * valor, y * valor};
    };

    private:
    float x;
    float y;
};

class Vehiculo{

    public:
    void avanzar(float t){
        float dX = velX * t;
        float dY = velY * t;
        posX = posX + dX;
        posY = posY + dY;
    }

    private:
    float posX;
    float posY;
    float velX;
    float velY;
};

class Planeta{

    private:

    void avanzar(const Vector2d& gravedad){
        const Vector2d deltaVelocidad = gravedad*instante;
        posX = posX + velX*instante;
        posY = posY + velY*instante;
    }

    const float instante = 0.01;
    float posX;
    float posY;
    float velX;
    float velY;
};