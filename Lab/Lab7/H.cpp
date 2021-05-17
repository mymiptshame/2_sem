#include <iostream>
#include <vector>

int main() {
    int N,x;
    char s;
    bool found = false;
    std::cin  >> N;
    std::vector<int> vec( N , 0);
    for (int i = 0;i<N;i++){
        std::cin >> x;
        vec[i] = x;
    }
    for (int i = 1;i<N;i++){
        if (not found){
            for (int j = 0; j<=N-1-i; j++){
                if (vec[j]+vec[j+i] == 0 and vec[j]<0){
                    std::cout << i;
                    found = true;
                    break;
                }

            }
        }
    }
    if (not found){
        std::cout << 0;
    }

    return 0;
}
