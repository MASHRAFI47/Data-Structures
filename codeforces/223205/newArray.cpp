#include <bits/stdc++.h>
using namespace std;

void newArray(int n) {
    vector<int> v(n);
    vector<int> v2(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    v2.insert(v2.end(), v.begin(), v.end());

    for(int x : v2) {
        cout << x << " ";
    }

}

int main() {
    int n;
    cin >> n;

    newArray(n);
    return 0;
}