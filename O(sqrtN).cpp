/*
    INPUT: 36
    OUTPUT: 1 36
            2 18
            3 12
            4 9
            6 6
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            cout << i << " " << n/i << endl;
        }
    }

    return 0;
}