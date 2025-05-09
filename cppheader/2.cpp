#include "2.hpp"
#include "1.hpp"
#include <iostream>
#include <climits>
void nghich_ngu::method1() {
    unsigned long long n = 0ULL;
    while (n < sys::random_next_ulong(1'000'000'000ULL, ULLONG_MAX)) {
        n++;
    }
    std::cout << n << std::endl;
}
