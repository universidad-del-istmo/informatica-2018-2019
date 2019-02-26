class Vector2d
{

    Vector2d(float _x, float _y) : x(_x), y(_y) {}

  public:
    Vector2d operator*(float valor) const
    {
        return {x * valor, y * valor};
    };
    Vector2d suma *(Vector2d vec, float val) const
    {
        return { x + val, y + val }
    }

  private:
    float x;
    float y;
};

class Vehiculo
{

  public:
    void avanzar(float t)
    {
        float dX = velX * t;
        float dY = velY * t;
        posX = posX + dX;
        posY = posY + dY;
    }

  private:
    Vector2d Pos;
    Vector2d Vel;
};

class Planeta
{

  private:
    void avanzar(const Vector2d &gravedad)
    {
        const Vector2d deltaVelocidad = gravedad * instante;
        posX = posX + velX * instante;
        posY = posY + velY * instante;
    }

    const float instante = 0.01;
    Vector2d Pos;
    Vector2d Vel;
};