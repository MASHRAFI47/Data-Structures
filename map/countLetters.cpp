#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> freq;

    for(int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    int t;
    cin >> t;
    while(t--) {
        char ch;
        cin >> ch;
        cout << freq[ch] << endl;
    }

    return 0;
}