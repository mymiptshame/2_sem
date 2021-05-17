#include <iostream>
using namespace std;

int main() {
    int N,n;
    bool flag = false;
    std::cin>> N;

    int *array = new int[N];

    for (int i = 0; i<N; i++){
        std:cin >> n;
        array[i] = 0;
        if (n %4 ==0){
            if (n/1000 == 4 or n/1000 == 5){
            }
            else{
                array[i] = n;
                flag = true;
            }
        }
        if (n %7 ==0){
            if (n/1000 == 1 or n/1000 == 7){
            }
            else{
                array[i] = n;
                flag = true;
            }
        }
        if (n %9 ==0){
            if (n/1000 == 9 or n/1000 == 8){
            }
            else{
                array[i] = n;
                flag = true;
            }
        }
    }

    if (not flag){
        std::cout << 0;
    }
    else{for (int i = 0; i<N; i++){
            if (array[i]!=0){
                std::cout << array[i]<< endl;
            }
        }

    }
    delete [] array;
    return 0;
}
