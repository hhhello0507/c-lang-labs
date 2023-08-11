#include "Vector3.h"

Vector3::Vector3(
        float x,
        float y,
        float z) : x_(x), y_(y), z_(z) {}

float Vector3::x() const { return x_; }
float Vector3::y() const { return y_; }
float Vector3::z() const { return z_; }

Vector3 Vector3::operator+(const Vector3& other) const {
    return {x_ + other.x_, y_ + other.y_, z_ + other.z_};
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return {x_ - other.x_, y_ - other.y_, z_ - other.z_};
}

Vector3 Vector3::operator*(float scalar) const {
    return {x_ * scalar, y_ * scalar, z_ * scalar};
}

std::ostream& operator<<(std::ostream& os, const Vector3& vec) {
    os << "(" << vec.x_ << ", " << vec.y_ << ", " << vec.z_ << ")";
    return os;
}
