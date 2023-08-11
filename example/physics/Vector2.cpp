#include "Vector2.h"

Vector2::Vector2(
        float x,
        float y) : x_(x), y_(y) {}

float Vector2::x() const { return x_; }
float Vector2::y() const { return y_; }

Vector2 Vector2::operator+(const Vector2& other) const {
    return {x_ + other.x_, y_ + other.y_};
}

Vector2 Vector2::operator-(const Vector2& other) const {
    return {x_ - other.x_, y_ - other.y_};
}

Vector2 Vector2::operator*(float scalar) const {
    return {x_ * scalar, y_ * scalar};
}

std::ostream& operator<<(std::ostream& os, const Vector2& vec) {
    os << "(" << vec.x_ << ", " << vec.y_ << ")";
    return os;
}
