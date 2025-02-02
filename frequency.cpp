#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int>freq(26);
    
    for(int i = 0; i < s.size(); i++) {
        char ch = s[i];
        int digit = ch - 'a';
        // cout << digit << endl;
        freq[digit]++;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            cout << (char)(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}