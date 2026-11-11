#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int &x : v) {
        std::cin >> x;
    }

    bool found = false;
    for (int x : v) {
        if (x < 0) {
            std::cout << x << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Отрицательных чисел нет" << std::endl;
    }

    return 0;
}
