#include <bits/stdc++.h>
using namespace std;


vector <long long> freq(1000000);

int main() {
    long long n;
    cin >> n;

    vector<long long> arr(n);

    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(long long i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    bool duplicate = false;
    for(long long i = 0; i < 1000000; i++) {
        if(freq[i] > 1) {
            duplicate = true; 
            break;
        }
    }

    if(duplicate) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}