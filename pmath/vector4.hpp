#pragma once

#include <cassert>

#include "./types.hpp"
#include "./vector3.hpp"

namespace pmath {
    union Vector4 {
        struct {
            float32 r;
            float32 g;
            float32 b;
            float32 a;
        };
        struct {
            float32 x;
            float32 y;
            float32 z;
            float32 w;
	    };

        Vector4() {
            this->x = 0.0f;
            this->y = 0.0f;
            this->z = 0.0f;
            this->w = 0.0f;
        }

        Vector4(float32 value) {
            this->x = value;
            this->y = value;
            this->z = value;
            this->w = value;
        }

        Vector4(float32 x, float32 y, float32 z, float32 w) {
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
        }

        Vector4(const Vector3& v3) {
            this->x = v3.x;
            this->y = v3.y;
            this->z = v3.z;
            this->w = 0.0f;
        }

        Vector4(const Vector3& v3, float32 value) {
            this->x = v3.x;
            this->y = v3.y;
            this->z = v3.z;
            this->w = value;
        }

        float& operator [] (size_t i) {
            assert(i < 4 && i >= 0);
            return *((&x)+i);
        }
    };
}