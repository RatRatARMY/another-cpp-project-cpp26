#include "cppheader/0.hpp"
#include "cppheader/1.hpp"
int main() {
    something::somethingforabcxyz();
    something::abc::somethingabc();
    something::abc* abc = new something::abc();
    abc->abcsomething();
    sys::xoa_con_tro(abc);
    unsigned long long x = 837283638ULL;
    unsigned long long y = x * sys::random_next_ulong(2ULL, 100ULL);
    sys::out::printf("What is that thing for %llu for another %llu\n", x, y);
    return 0;
}