#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    if (matrix.empty() || matrix[0].empty()) return 0;

    int rows = matrix.size();
    int cols = matrix[0].size();
    int sum = 0;

    for (int i = 0, j = 0; i < rows; ) {
        sum += matrix[i][j];
        
        j++;
        if (j == cols) { 
            j = 0;
            i++;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
