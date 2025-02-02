#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 2, 2, 2, 5};
    
    replace(l.begin(), l.end(), 2, 100);

    for(int val : l) {
        cout << val << " ";
    }

    return 0;
}