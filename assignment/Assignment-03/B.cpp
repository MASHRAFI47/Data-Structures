#include <bits/stdc++.h>
using namespace std;

class myStack {
    public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if(v.empty()) {
            return;
        }
        v.pop_back();
    }

    int size() {
        return v.size();
    }

    int top() {
        return v.back();
    }

    bool empty() {
        return v.empty();
    }
};


class myQueue {
    public:
    list<int> l;

    void push(int val) {
        l.push_back(val);
    }

    void pop() {
        l.pop_front();
    }

    int front() {
        return l.front();
    }

    int back() {
        return l.back();
    }

    int size() {
        return l.size();
    }

    bool empty() {
        return l.empty();
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    if(n != m) {
        cout << "NO" << endl;
        return 0;
    }

    myStack st;

    while(n--) {
        int val;
        cin >> val;
        st.push(val);
    }

    myQueue q;
    while(m--) {
        int val;
        cin >> val;
        q.push(val);
    }

    bool same = true;
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