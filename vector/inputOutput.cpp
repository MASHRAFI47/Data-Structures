#include <bits/stdc++.h>
using namespace std;

/*
    INPUT:
    5
    1 5 3 3 1
    5 1 2 3 4

    OUTPUT:
    1 5 3 3 1 
    5 1 2 3 4 
*/

int main() {
    int n;
    cin >> n;

    //WAY 1
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }


    cout << endl;

    //WAY 2
    vector<int> v2;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for(int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }

    return 0;
}