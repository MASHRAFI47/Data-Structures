#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> first(n);

    for(int i = 0; i < n; i++) {
        cin >> first[i];
    }

    int m;
    cin >> m;

    vector<int> second(m);

    for(int i = 0; i < m; i++) {
        cin >> second[i];
    }

    int index;
    cin >> index;
    first.insert(first.begin()+index, second.begin(), second.end());

    for(int x : first) {
        cout << x << " ";
    }



    return 0;
}