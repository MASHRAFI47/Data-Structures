#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(10);
    v.push_back(5);

    v.clear();
    v.push_back(10);
    v.resize(5, -1);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    cout << v.size() << endl;
    cout << v.empty() << endl;
    return 0;
}