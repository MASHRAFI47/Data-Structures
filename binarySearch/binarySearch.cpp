#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int value;
    cin >> value;

    bool found = false;

    int l = 0;
    int r = n-1;
    while(l <= r) {
        int mid = (l + r) / 2;

        if(arr[mid] == value) {
            found = true;
            break;
        }
        else if(arr[mid] < value) {
            l = mid + 1;
        }
        else if(arr[mid] > value) {
            r = mid - 1;
        }
    }

    if(found) {
        cout << "Found" << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

    return 0;
}