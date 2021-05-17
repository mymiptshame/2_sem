#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin  >> n;
    std::vector<std::vector<int>> vec( n , std::vector<int> (n));
    for (int i = 0 ;i<n; i++) {
        for (int j = 0; j< n;j++) {
            std::cin >> vec[i][j];
        }
    }
    for (int i = 0 ;i<n; i++) {
        for (int j = n-1 ;j>=0; j--) {
            std::cout << vec[j][i]<< ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
