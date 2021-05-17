#include <iostream>
#include <vector>

int main() {
    int n,id,state;
    std::cin  >> n;
    std::vector<int> vec( n , 0);
    state = 0;
    for (int i =0; i<n;i++){
        char s;
        std::cin >> s;
        if (s == '+'){
            std::cin >> id;
            vec[state]= id;
            state+=1;
        }
        else if (s == '*'){
            std::cin >> id;
            if (state %2 == 0){
                for (int i = state-1; i>=state/2;i--){
                    vec[i+1]=vec[i];
                }
                vec[state/2] = id;
                state+=1;
            }
            else{
                for (int i = state-1; i>=state/2;i--){
                    vec[i+1]=vec[i];
                }
                vec[state/2+1] = id;
                state+=1;

            }

        }
        else{
            std::cout << vec[0]<< std::endl;
            for (int i =0; i<state;i++){
                vec[i]=vec[i+1];
            }
            state-=1;

        }


    }


    return 0;
}