#include <iostream>
#include <cassert>

#include "pmath/pmath.hpp"

using namespace pmath;

void print(Vector2 v) {
    std::cout << "(" << v.x << "," << v.y << ")" << std::endl;
}

void print(Vector3 v) {
    std::cout << "(" << v.x << "," << v.y << "," << v.z << ")" << std::endl;
}

void print(Vector4 v) {
    std::cout << "(" << v.x << "," << v.y << "," << v.z << "," << v.w << ")" << std::endl;
}

int main(int argc, char** argv) {
    pmath::Vector2 position(1.0f, 2.0f);
    Vector4 direction(1.0f, 2.0f, 3.0f, 4.0f);
    Vector3 p(position, 27.0f);
    std::cout << direction.x << "," << direction.y << std::endl;
    for(int i = 0; i < 4; i++) {
        direction[i] = i*2;
    }
    for(int i = 0; i < 4; i++) {
        std::cout << direction[i] << std::endl;
    }
    std::cout << "Direction: ";
    print(direction);

    return 0;
}