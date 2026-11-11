#include <iostream>

int main() {
    int n = 5;
    std::cout << "obychny for: ";
    for (int i = 0; i < n; i++) {
        std::cout << i << " ";
        if (i == 1) {
            n = 3;
        }
    }
    std::cout << std::endl;

    int m = 5;
    std::cout << "forc: ";
    {
        int __i = 0, __n = m;
        for (const int &i = __i; i < __n; __i++) {
            std::cout << i << " ";
            if (i == 1) {
                m = 3;
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
