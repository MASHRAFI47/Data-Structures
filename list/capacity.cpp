#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l(5, 3);
    // l.clear();
    cout << l.size() << endl;

    if(l.empty()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    l.resize(10, 100); // komaile size kombe, baraile barbe and 0 krbe, jodi second parameter e 100 dei taile oi value 100 hbe
    for(int val : l) {
        cout << val << " ";
    }

    return 0;
}