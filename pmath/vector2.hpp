#pragma once

#include <cassert>

#include "./types.hpp"

namespace pmath {
    union Vector2 {
        struct {
            float32 u;
            float32 v;
        };
        struct {
            float32 x;
            float32 y;
        };

        Vector2() {
            this->x = 0.0f;
            this->y = 0.0f;
        }

        Vector2(float32 value) {
            this->x = value;
            this->y = value;
        }

        Vector2(float32 x, float32 y) {
            this->x = x;
            this->y = y;
        }

        float& operator [] (size_t i) {
            assert(i < 2 && i >= 0);
            return *((&x)+i);
        }

        Vector2 operator + (const Vector2& other) const {
            return Vector2(this->x + other.x, this->y + other.y);
        }

        Vector2& operator += (const Vector2& other) {
            this->x += other.x;
            this->y += other.y;
            return *this;
        }

        Vector2 operator - (const Vector2& other) const {
            return Vector2(this->x - other.x, this->y - other.y);
        }

        Vector2& operator -= (const Vector2& other) {
            this->x -= other.x;
            this->y -= other.y;
            return *this;
        }

        Vector2 operator - () const {
            return Vector2(-this->x, -this->y);
        }

        template<typename T>
        Vector2 operator * (const T& scalar) const {
            return Vector2(this->x * scalar, this->y * scalar);
        }

        template<typename T>
        Vector2 operator *= (const T& scalar) {
            this->x *= scalar;
            this->y *= scalar;
            return *this;
        }

        template<typename T>
        Vector2 operator / (const T& scalar) const {
            return Vector2(this->x / scalar, this->y / scalar);
        }

        template<typename T>
        Vector2 operator /= (const T& scalar) {
            this->x /= scalar;
            this->y /= scalar;
            return *this;
        }

        float sqrLength() const {
            return this->x * this->x + this->y * this->y;
        }

        float length() const {
            return sqrtf(sqrLength());
        }

        Vector2& normalize() {
            float l = length();
            if(l == 0) {
                return *this;
            }
            *this /= l;
            return *this;
        }
    
    };
}