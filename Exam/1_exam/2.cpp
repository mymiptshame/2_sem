#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    float k,h_0,m;
    std::cin >> k >> h_0 >> m;
    double x = sqrt(2*k/m)*h_0;
    std::cout << std::fixed<<std::setprecision(1);
    std::cout << x;
    return 0;
}