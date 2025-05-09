#include "0.hpp"
#include <iostream>
#include <cstdarg>
#include <sstream>
void something::somethingforabcxyz() {
    std::cout << "Cuu" << std::endl;
}
void something::abc::somethingabc() {
    std::cout << "something" << std::endl;
}
void something::abc::abcsomething() {
    std::cout << "what is that thing" << std::endl;
}
void sys::out::printf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    std::vprintf(format, args);
    va_end(args);
}
