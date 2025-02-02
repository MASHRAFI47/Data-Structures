#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 2, 2, 20, 2, 10, 5, 5};
    
    l.sort(); // ascending
    
    l.unique(); // must be sorted
    
    for(int val : l) {
        cout << val << " ";
    }
    
    return 0;
}