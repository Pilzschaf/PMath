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
    Vector2 position(-2, 3);
    position *= 2;
    print(position);
    position.normalize();
    print(position);
    Vector4 v(1.0f, 2.0f, 3.0f, 4.0f);
    print(v);
    v /= 2.7f;
    print(v);
    std::cout << v.length() << " " << v.sqrLength() << std::endl;
    v.normalize();
    std::cout << v.length() << " " << v.sqrLength() << std::endl;

    return 0;
}
