/*

5
10 20 30 40 50
5
10 20 30 40 50
===> YES

5
10 20 30 40 50
4
10 20 30 40
===> NO

5
10 20 30 40 50
5
50 40 30 20 10
===> NO

*/


#include <bits/stdc++.h>
using namespace std;

class myStack {
    public:
        vector<int> v;
        int sz;

        void push(int val) {
            sz++;
            v.push_back(val);
        }

        void pop() {
            sz--;
            v.pop_back();
        }

        int top() {
            return v.back();
        }

        int size() {
            return sz;
        }

        bool empty() {
            return v.empty();
        }
};

int main() {
    myStack st1, st2;

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st1.push(val);
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        st2.push(val);
    }

    if(n != m) {
        cout << "NO" << endl;
        return 0;
    }


    bool isSame = true;
    while(!st1.empty()) {
        int val = st1.top();
        int val2 = st2.top();

        if(val != val2) {
            isSame = false;
            break;
        }

        st1.pop();
        st2.pop();
    }

    if(isSame) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}