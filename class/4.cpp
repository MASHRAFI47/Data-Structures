#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int left = 0;
    int right = 9;

    int value;
    cin >> value;

    bool found = false;

    while(left <= right) {
        int mid = (left+right) / 2;

        if(arr[mid] == value) {
            found = true;
            break;
        }
        else if(arr[mid] > value) {
            right = mid - 1;
        }
        else if(arr[mid] < value) {
            left = mid + 1;
        }
    }

    if(found) {
        cout << "FOUND" << endl;
    }
    else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}