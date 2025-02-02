#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenSum += arr[i];
        }
        else {
            oddSum += arr[i];
        }
    }

    cout << evenSum << " " << oddSum << endl;
    
    return 0;
}