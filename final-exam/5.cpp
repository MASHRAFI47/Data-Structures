#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int> > pq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        pq.push(val);
    }

    int t;
    cin >> t;
    while(t--) {
        cin.ignore();
        int command;
        cin >> command;

        if(command == 0) {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if(command == 1) {
            cout << pq.top() << endl;
        }
        else if(command == 2) {
            if(pq.empty()) {
                cout << "Empty" << endl;
                continue;
            }
            if(pq.top()) {
                pq.pop();
                if(pq.empty()) {
                    cout << "Empty" << endl;
                    continue;
                }
                else {
                    cout << pq.top() << endl;
                }
            }
        }

    }

    return 0;
}