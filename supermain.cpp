#include <iostream>
#include <bitset>
#include "cppheader/1.hpp"
using namespace std;
int main(int argc, char* argv[]) {
    if (argv[argc] == nullptr) {
        cout << "Compiler/OS/runtime lib này đúng rồi :D" << endl;
    }
    else if (argv[argc] != nullptr) {
        cout << "Compiler/OS/runtime lib này bị loạn rồi :D" << endl;
    }
    unsigned long long x = sys::random_next_ulong(8393ULL, 1638293ULL);
    unsigned long long y = x * sys::random_next_ulong(2ULL, 5637ULL);
    cout << bitset<64>(x) << endl;
    cout << bitset<64>(compl x) << endl;
    cout << bitset<64>(y) << endl;
    cout << bitset<64>(compl y) << endl;
    cout << x << endl;
    cout << compl x << endl;
    cout << y << endl;
    cout << compl y << endl;
    cout << argv[0] << endl;
}