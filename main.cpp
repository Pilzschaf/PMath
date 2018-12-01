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
    Vector2 start(4, -3);
    Vector2 target(-3, 2);
    Vector2 shotDirection = target - start;
    print(shotDirection);

    Vector3 d = -Vector3(27, -7, 3);
    print(d);
    Vector4 p(1, 2, 3, 4);
    p += Vector4(2, 4, 6, 8);
    print(p);

    Vector2 position(-2, 3);
    print(position);
    Vector2 velocity(1, 4);
    position = position + velocity;
    print(position);

    return 0;
}
