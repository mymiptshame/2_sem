#include <ostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int b,c;
    int number;
    cin >> number;

    vector<pair<int, int>> a(number);
    set<pair<int, int>> k;

    for (auto &d : a)
        cin >> d.first >> d.second;

    for (auto d: a)
        k.insert(d);

    for (int i=0; i+1<number; ++i) {
        for (int j=i+1; j<number; ++j) {
            pair<int, int> ans;
            ans.first = a[i].first + a[j].first;
            ans.second = a[i].second + a[j].second;
            if (k.count(ans))
            {
                cout << "YES";
                return 1;

            }
        }
    }

    cout << "NO";
}