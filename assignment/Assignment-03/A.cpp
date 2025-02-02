#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    if(n != m) {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;

    stack<int> st;
    queue<int> q;

    while(n--) {
        int val;
        cin >> val;
        st.push(val);
    }

    while(m--) {
        int val;
        cin >> val;
        q.push(val);
    }
    

    while(!st.empty()) {
        if(st.top() == q.front()) {
            st.pop();
            q.pop();
        }
        else {
            same = false;
            break;
        }
    }


    if(same) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    

    return 0;
}