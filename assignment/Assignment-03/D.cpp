#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    queue<string> q;
    while(t--) {
        int n;
        cin >> n;

        string s;
        getline(cin, s);

        s.erase(0, 1);

        if(n == 0) {
            q.push(s);
        }
        else if(n == 1) {
            if(q.empty()) {
                cout << "Invalid" << endl;
                continue;
            }
            cout << q.front() << endl;
            q.pop();
        }
    }

    // cout << q.back() << endl;
    

    // while(!q.empty()) {
    //     cout << q.front() << endl;
    //     q.pop();
    // }

    return 0;
}