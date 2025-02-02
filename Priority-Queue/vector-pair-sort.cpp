#include <bits/stdc++.h>
using namespace std;

class cmp {
    public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        if(a.second > b.second) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    int n;
    cin >> n;

    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp > pq;

    while(n--) {
        int x, y;
        cin >> x >> y;
        pq.push({x, y});
    }

    while(!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}