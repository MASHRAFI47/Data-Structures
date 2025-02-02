#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    cout << l.size() << endl;

    list<int> l2(5);
    cout << l2.size() << endl;

    list<int> l3(5, 2);
    // for(auto it = l3.begin(); it != l3.end(); it++) {
    //     cout << *it << endl;
    // }
    for(int val : l3) {
        cout << val << " ";
    }


    cout << endl;

    list<int> l4(l3); // copy
    for(int val : l4) {
        cout << val << " ";
    }

    cout << endl;

    int a[] = {1, 2, 3, 4, 5};
    list<int> l5(a, a+5);
    for(int val : l5) {
        cout << val << " ";
    }

    cout << endl;


    vector<int> v = {10, 20, 30};
    list<int> l6(v.begin(), v.end());
    for(int val : l6) {
        cout << val << " ";
    }


    return 0;
}