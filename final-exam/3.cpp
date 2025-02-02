#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    cin.ignore();
    while(t--) {

        map<string, int> mp;

        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        while(ss >> word) {
            mp[word]++;
        }
        
        int mx = INT_MIN;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(max(mx, it->second) > mx) {
                mx = it->second;
            }
        }

        stringstream ss2(s);
        string word2;
        map<string, int> mp2;
        while(ss2 >> word2) {
            mp2[word2]++;
            if(mp2[word2] == mx) {
                cout << word2 << " " << mx << endl;
                break;
            }
        }
    }

    return 0;
}