#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int mx = -1;

    int count = 0;
    int first;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(first == arr[i]) {
            return -1;
        } 
        first = arr[i];
        if(arr[i] > mx) {
            mx = arr[i];
        }
    }

    cout << mx << endl;
    
    return 0;
}