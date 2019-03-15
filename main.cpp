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
    Vector2 a(2, 4);
    Vector2 b(3, 1);
    std::cout << "a dot b: " << a.dot(b) << std::endl;
    std::cout << "b dot a: " << b.dot(a) << std::endl;
    float result = a.dot(b);
    result /= a.length();
    result /= b.length();
    std::cout << "cos(angle): " << result;

    return 0;
}
