#include "math.h"
#include <random>

Math::Math() {}

int Math::add(int a, int b) {
    return a + b;
}

int Math::mult(int a, int b) {
    return a * b;
}

int Math::getRandom() {
    static std::mt19937 rng{std::random_device{}()};
    return rng() % 100;
}
