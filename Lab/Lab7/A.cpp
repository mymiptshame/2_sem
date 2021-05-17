#include <iostream>

int main() {
    int a,b,c,d,x, minscore;
    std::cin >> a >>b >> c >> d >> x;
    minscore = 0;
    if (a+x == b){
        minscore+=1;
    }
    if (c*x == d){
        minscore+=1;
    }
    if (minscore == 0 and x != 1024){
        std::cout << 2;
    }
    else if (minscore == 0 and x == 1024){
        std::cout << 3;
    }
    else if (minscore == 1){
        std::cout << 4;
    }
    else if (minscore == 2){
        std::cout << 5;
    }



    return 0;
}
