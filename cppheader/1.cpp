#include "1.hpp"
#include <random>
unsigned long long sys::random_next_ulong(unsigned long long min, unsigned long long max) {
    static std::random_device rd;
    static std::mt19937_64 gen(rd());
    std::uniform_int_distribution dist(min, max);
    return dist(gen);
}
