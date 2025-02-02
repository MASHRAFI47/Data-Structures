#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int value;
    cin >> value;

    int l = 0;
    int r = n - 1;

    int first = -1;

    while(l <= r) {
        int mid = (l + r) / 2;
        
        if(v[mid] == value) {
            first = mid;
            r = mid - 1;
        }

        else if(v[mid] > value) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << first << endl;

    return 0;
}