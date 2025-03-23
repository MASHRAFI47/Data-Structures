#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        l.push_back(s[i]);
    }

    l.sort();
    l.unique();

    for(char c : l) {
        cout << c;
    }

    return 0;
}