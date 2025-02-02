//https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    map<string, int> freq;

    while(t--) {
        string s;
        cin >> s;
        
        if(freq[s] == 0) {
            cout << "OK" << endl;
        }
        else {
            cout << s << freq[s] << endl;
        }

        freq[s]++;
    }

    

    return 0;
}