#ifndef RAY_H
#define RAY_H

#include "Vector.h"

class Ray {
    Vector origin, direction;

public:
    Ray(const Vector& _origin, const Vector& _direction) : origin(_origin), direction(_direction) {}

    Vector getRayOrigin() const { return origin; }
    Vector getRayDirection() const { return direction; }

    Vector setOrigin(Vector newOrigin) { origin = newOrigin;}
    Vector setDirection(Vector newDirection) { direction = newDirection; }
};

#endif