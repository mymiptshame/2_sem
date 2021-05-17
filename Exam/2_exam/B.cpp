Исходный код
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


struct Abonent{
    string number;
    string name;
    int dolg;
};


bool compute (Abonent a, Abonent b) {
    if (a.dolg != b.dolg) return a.dolg > b.dolg;
    else {
        if (a.name != b.name) return a.name < b.name;
        else return a.number < b.number;
    }
}

int main () {
    int n, i;
    cin >> n;
    vector<Abonent> sp(n);
    for (i = 0; i < n; ++i)
        cin >> sp[i].name >> sp[i].number >> sp[i].dolg;
    sort(sp.begin(), sp.end(), compute);
    for (i = 0; i < min(n, 10); ++i)
        cout << sp[i].name << " " << sp[i].number << " " << sp[i].dolg << endl;
    return 0;
}