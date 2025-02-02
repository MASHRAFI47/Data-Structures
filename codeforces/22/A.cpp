//https://codeforces.com/problemset/problem/22/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;
    while(n--) {
        int val;
        cin >> val;
        s.insert(val);
    }

    if(s.size() <= 1) {
        cout << "NO" << endl;
    }
    else {
        auto it = s.begin();
        it++;

        cout << *it << endl;
    }

    return 0;
}