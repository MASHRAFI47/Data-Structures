#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4, 5};

    //l.erase(next(l.begin(), 2)); // single value
    l.erase(next(l.begin(), 1), next(l.begin(), 3)); //multiple value
    

    for(int val : l) {
        cout << val << " ";
    }

    return 0;
}