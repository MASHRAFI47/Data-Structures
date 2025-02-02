#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 2, 1, 2};
    
    replace(v.begin(), v.end()-1, 2, 100);
    
    for(int x : v) {
        cout << x << " ";
    }
    
    return 0;
}