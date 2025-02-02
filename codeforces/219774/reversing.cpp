// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    reverse(v.begin(), v.end());

    for(int x : v) {
        cout << x << " ";
    }

    return 0;
}