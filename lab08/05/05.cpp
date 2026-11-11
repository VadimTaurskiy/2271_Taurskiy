#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    for (int &x : v) {
        std::cin >> x;
    }

    int last = v.back();
    for (int &x : v) {
        x += last;
    }

    int pos = 0;
    int neg = 0;
    for (int x : v) {
        if (x > 0) {
            pos++;
        } else if (x < 0) {
            neg++;
        }
    }

    std::cout << pos << " " << neg << std::endl;
    return 0;
}
