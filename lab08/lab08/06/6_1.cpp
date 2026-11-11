#include <iostream>

int main() {
    std::cout << "obychny for: ";
    for (int i = 0; i < 10; i++) {
        std::cout << i << " ";
        i++;
    }
    std::endl(std::cout); // или просто std::cout << std::endl;

    std::cout << "forc: ";
    {
        int __i = 0, __n = 10;
        for (const int &i = __i; i < __n; __i++) {
            std::cout << i << " ";
            // i++; если убрать комментарий и оставить i++ в коде, то будет ошибка, поэтому мы не может так написать.
        }
    }
    std::cout << std::endl;

    return 0;
}
