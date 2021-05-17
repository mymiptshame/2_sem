#include <iostream>
#include <vector>
#include <cmath>

class citizen{
public:
    std::string name;
    int type;

};

void killcitizen(int position, std::vector<citizen> & array){
    citizen t = array[position];
    for (int  i = position+1; i< array.size();i++){
        array[i-1] = array[i];
    }
    array.pop_back();
};

int main() {
    int pointer,N,x,t,n,news,days;
    pointer = 0;
    std::cin >> N >> news;
    std::vector<citizen> vec(N);
    for (int i = 0; i<N; i++){
        std::cin >> vec[i].name >> vec[i].type;
    }
    std::cin >> days;

    for (int i = 0; i<days; i++){
        if (vec.size()>1) {
            t = pointer;
            if (pointer == vec.size() - 1) {
                pointer = 0;
            } else if (vec[pointer].type == 1 and news == 0) {
                pointer = pointer;
            } else {
                pointer += 1;
            }

            if (vec[t].type == 0 and news == 0) {
                vec[t].type = 1;
                news = (news + 1) % 2;
            } else if (vec[t].type == 0 and news == 1) {
                news = (news + 1) % 2;
            } else if (vec[t].type == 1 and news == 1) {
            } else if (vec[t].type == 1 and news == 0) {
                killcitizen(t, vec);
            }
        }
    }

    for (int i = 0; i<vec.size(); i++){
        std::cout << vec[i].name << " "<< vec[i].type << "\n";
    }

    return 0;
}
