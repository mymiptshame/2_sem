#include <iostream>


int main() {

    int X,Y;
    int k;
    std::cin>>X>>Y>>k;
    char **data = new char* [Y];






    for (int i=0; i<Y; i++) {
        data[i] = new char[X];
        for (int j = 0; j < X; j++){
            data[i][j] = '*';
        }
    }


    for (int i=0; i<k; i++) {
        int x,y;
        std::cin >> x >>y;
        data[y][x] = 'T';
    }

    for (int i=0; i<Y; i++) {

        for (int j=0; j<X; j++) {
            std::cout << data[i][j];
        }

        std::cout << std::endl;
    }



    for (int i=0; i<Y; i++) {
        delete [] data[i];
    }

    delete [] data;


    return 0;
}