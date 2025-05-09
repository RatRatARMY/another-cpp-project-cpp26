#include "2.hpp"
#include <iostream>
void nghich_ngu::method1() {
    size_t n = 0;
    while (n < 1'000'000'000) {
        std::cout << n << std::endl;
        n++;
    }
    std::cout << n << std::endl;
}
