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

        Vector3& operator += (const Vector3& other) {
            this->x += other.x;
            this->y += other.y;
            this->z += other.z;
            return *this;
        }

        Vector3 operator + (const Vector3& other) const {
            return Vector3(this->x + other.y, this->y + other.y, this->z + other.z);
        }

        Vector3& operator -= (const Vector3& other) {
            this->x -= other.x;
            this->y -= other.y;
            this->z -= other.z;
            return *this;
        }

        Vector3 operator - (const Vector3& other) const {
            return Vector3(this->x - other.y, this->y - other.y, this->z - other.z);
        }

        Vector3 operator - () const {
            return Vector3(-this->x, -this->y, -this->z);
        }

        template<typename T>
        Vector3 operator * (const T& scalar) const {
            return Vector3(this->x * scalar, this->y * scalar, this->z * scalar);
        }

        template<typename T>
        Vector3 operator *= (const T& scalar) {
            this->x *= scalar;
            this->y *= scalar;
            this->z *= scalar;
            return *this;
        }

        template<typename T>
        Vector3 operator / (const T& scalar) const {
            return Vector3(this->x / scalar, this->y / scalar, this->z / scalar);
        }

        template<typename T>
        Vector3 operator /= (const T& scalar) {
            this->x /= scalar;
            this->y /= scalar;
            this->z /= scalar;
            return *this;
        }

        float length() const {
            return sqrtf(sqrLength());
        }

        float sqrLength() const {
            return this->x * this->x + this->y * this->y + this->z * this->z;
        }

        Vector3& normalize() {
            float l = length();
            if(l == 0) {
                return *this;
            }
            *this /= l;
            return *this;
        }

        Vector3 normalized() {
            return Vector3(this->x, this->y, this->z).normalize();
        }

        float dot(Vector3& other) {
            return this->x * other.x + this->y * other.y + this->z * other.z;
        }
    }; 
}