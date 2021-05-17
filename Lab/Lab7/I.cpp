#include <iostream>
#include <vector>

int main() {
    int numberch, numbernch,N,x,t;
    char s;
    bool found = false;
    std::vector<int> vec( 10000 , 0);
    std::vector<int> ch( 10000 , 0);
    std::vector<int> nch( 10000 , 0);
    numberch = 0;
    numbernch = 0;
    while (std::cin >> x) {
        if (x%2 ==0){
            ch[numberch] = x;
            numberch+=1;
        }
        else{
            nch[numbernch] = x;
            numbernch+=1;
        }

    }
    for (int i = numberch; i>0;i--){
        for (int j = 0; j<i-1;j++){
            if (ch[j]> ch[j+1]){
                t = ch[j];
                ch[j] = ch[j+1];
                ch[j+1] = t;
            }
        }

    }
    for (int i = 0; i< numberch; i++){
        std:: cout <<ch[i]<< " ";
    }
    for (int i = numbernch; i>0;i--){
        for (int j = 0; j<i-1;j++){
            if (nch[j]> nch[j+1]){
                t = nch[j];
                nch[j] = nch[j+1];
                nch[j+1] = t;
            }
        }

    }
    for (int i = 0; i< numbernch; i++){
        std:: cout <<nch[i]<< " ";
    }
    return 0;
}
