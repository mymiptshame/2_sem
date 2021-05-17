#include <iostream>
#include <vector>
#include <cmath>
int main() {
    int numberch, numbernch,N,x,t;
    std::vector<int> vec( 10000 , 0);
    int n= 0;
    int maxlen = 0;
    while (std::cin >> x) {
        int len = 0;
        int count =1;
        vec[n] = x;
        n+=1;
        while (x/count>0){
            count*=10;
            len+=1;
        }
        if (len> maxlen){
            maxlen = len;
        }
    }
    for (int i = 1 ; i<maxlen+1; i++){
        for (int j = 1; j<n; j++){
            for (int k = 0; k<n-j; k++){
                if ((vec[k]/int(pow(10,i-1))%10)>(vec[k+1]/int(pow(10,i-1))%10)){
                    t = vec[k];
                    vec[k] = vec[k+1];
                    vec[k+1] = t;
                }
            }
        }

        for (int i = 0; i< n; i++){
            std:: cout <<vec[i]<< " ";
        }
        std:: cout << "\n";
    }


    return 0;
}