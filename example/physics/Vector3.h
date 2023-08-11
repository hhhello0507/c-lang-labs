#include <iostream>
#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3 {
public:
    Vector3(
            float x = 0.0f,
            float y = 0.0f,
            float z = 0.0f
            );
    float x() const;
    float y() const;
    float z() const;

    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(float scalar) const;

    friend std::ostream& operator<<(std::ostream& os, const Vector3& vec);
private:
    float x_;
    float y_;
    float z_;
};
#endif
