#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 2, 2, 20, 5};
    
    auto it = find(l.begin(), l.end(), 20);
    
    if(it == l.end()) {
        cout << "Not found" << endl;
    }
    else {
        cout << "Found" << endl;
    }
    
    return 0;
}