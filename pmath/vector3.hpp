#pragma once

#include <cassert>

#include "./types.hpp"
#include "./vector2.hpp"

namespace pmath {
    struct Vector3 {
        float32 x;
        float32 y;
        float32 z;

        Vector3() {
            this->x = 0.0f;
            this->y = 0.0f;
            this->z = 0.0f;
        }

        Vector3(float32 value) {
            this->x = value;
            this->y = value;
            this->z = value;
        }

        Vector3(float32 x, float32 y, float32 z) {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        Vector3(const Vector2& v2) {
            this->x = v2.x;
            this->y = v2.y;
            this->z = 0.0f;
        }

        Vector3(const Vector2& v2, float32 value) {
            this->x = v2.x;
            this->y = v2.y;
            this->z = value;
        }

        float& operator [] (size_t i) {
            assert(i < 3 && i >= 0);
            return *((&x)+i);
        }
    }; 
}