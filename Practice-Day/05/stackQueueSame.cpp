/*

5
10 20 30 40 50
5
10 20 30 40 50
===> NO

5
10 20 30 40 50
4
10 20 30 40
===> NO

5
10 20 30 40 50
5
50 40 30 20 10
===> YES

*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    if(n != m) {
        cout << "NO" << endl;
        return 0;
    }

    bool isSame = true;
    while(!st.empty()) {
        int val = st.top();
        int val2 = q.front();

        if(val != val2) {
            isSame = false;
            break;
        }

        st.pop();
        q.pop();
    }

    if(isSame) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}