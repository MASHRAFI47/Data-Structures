#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(50);
    pq.push(35);
    cout << pq.top() << endl; // 35
    pq.push(100);
    pq.push(2);
    cout << pq.top() << endl; // 2

    pq.pop(); // 2 pops
    cout << pq.top() << endl; // 35

    return 0;
}