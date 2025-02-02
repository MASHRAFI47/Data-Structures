#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 2, 2, 20, 2, 10, 5, 5};
    
    cout << l.front() << " " << l.back() << endl;
    cout << *next(l.begin(), 3);

    
    return 0;
}