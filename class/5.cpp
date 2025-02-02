#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *ptr;
    ptr = arr;

    int product = 1;

    for(int i = 0; i < n; i++) {
        sum += *(ptr + i);
        product *= *(ptr + i);
    }

    cout << sum << endl;
    cout << product << endl;

    return 0;
}