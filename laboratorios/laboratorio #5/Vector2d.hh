#pragma once

#include <string>

class Vector2d{

    public:
    Vector2d(const float x, const float y);
    Vector2d operator+(const Vector2d& otro) const;
    float getX() const;
    float getY() const;
    const std::string to_string() const;

    private:
    const float x;
    const float y;
}