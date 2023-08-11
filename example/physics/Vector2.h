
#include <iostream>
#ifndef VECTOR3_H
#define VECTOR3_H

class Vector2 {
public:
    Vector2(
            float x = 0.0f,
            float y = 0.0f
            );
    float x() const;
    float y() const;

    Vector2 operator+(const Vector2& other) const;
    Vector2 operator-(const Vector2& other) const;
    Vector2 operator*(float scalar) const;

    friend std::ostream& operator<<(std::ostream& os, const Vector2& vec);
private:
    float x_;
    float y_;
};
#endif
