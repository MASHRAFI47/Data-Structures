#include <bits/stdc++.h>
using namespace std;

int main() {
    //vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;

    //v2 = v; //copy of first vector; reassign;
    // for(int x : v2) {
    //     cout << x << " ";
    // }


    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int> v4 = {100, 200, 300};

    v3.erase(v3.begin()+0, v3.begin()+3);
    // v3.insert(v3.begin()+2, v4.begin(), v4.end());

    for(int x : v3) {
        cout << x << " ";
    }
    cout << endl;
    cout << v3.size() << endl;
    return 0;
}