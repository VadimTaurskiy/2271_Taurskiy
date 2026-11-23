#include <iostream>

int main() {
    int a = 5, b = 9;
    int *p = &a;
    int &r = b;
    int res = (*p) * (r & b);
    std::cout << res << std::endl;
    return 0;
}