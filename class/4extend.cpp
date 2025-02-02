#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int val;
    cin >> val;
    int found = -1;
    int count = 0;

    for(int i = 0; i < 10; i++) {
        if(arr[i] == val) {
            found = 1;
            count++;
        }
    }

    if(found) {
        cout << "FOUND" << endl;
    }
    else {
        cout << "NOT FOUND" << endl;
    }

    cout << count << endl;

    return 0;
}