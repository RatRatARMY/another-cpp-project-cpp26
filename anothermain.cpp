#include <iostream>
#include "cppheader/2.hpp"
int main(int argc, char** argv) {
    nghich_ngu::method1();
    std::cout << "Thanh cong roi!" << std::endl;
    std::cout << argv[0] << std::endl;
    if (argv[argc] == nullptr) {
        std::cout << "Dung theo chuan" << std::endl;
    }
    else if (argv[argc] != nullptr) {
        std::cout << "Compiler/OS/runtime lib nay bi loan roi (toi nghi vay)" << std::endl;
    }
}