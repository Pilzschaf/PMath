#include <iostream>
#include <cassert>

#include "pmath/pmath.hpp"

using namespace pmath;

void print(Vector2 v) {
    std::cout << '(' << v.x << ',' << v.y << ")\n";
}

void print(Vector3 v) {
    std::cout << '(' << v.x << ',' << v.y << ',' << v.z << ")\n";
}

void print(Vector4 v) {
    std::cout << '(' << v.x << ',' << v.y << ',' << v.z << ',' << v.w << ")\n";
}

int main(int argc, char** argv) {
    pmath::Vector2 position(1.0f, 2.0f);
    Vector4 direction(1.0f, 2.0f, 3.0f, 4.0f);
    Vector3 p(position, 27.0f);
    std::cout << direction.x << ',' << direction.y << '\n';
    for(int i = 0; i < 4; i++) {
        direction[i] = i*2;
    }
    for(int i = 0; i < 4; i++) {
        std::cout << direction[i] << '\n';
    }
    std::cout << "Direction: ";
    print(direction);

    return 0;
}
