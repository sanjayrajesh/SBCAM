#include <iostream>
using namespace std;

void func1(int a, int* b, float* c) {
    // Function body
    cout << "In fun1";
}

void func2(float* x, char* y, int z) {
    // Function body
}

void func3(int* p) {
    // Function body
}

int main() {
    // Function calls
    int x = 10;
    float y = 20.5;
    char ch = 'A';

    func1(5, &x, &y);
    func2(&y, &ch, 15);
    func3(&x);

    return 0;
}
