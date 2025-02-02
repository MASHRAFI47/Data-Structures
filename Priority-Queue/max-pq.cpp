#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(50);
    pq.push(35);
    cout << pq.top() << endl; // 50
    pq.push(100);
    cout << pq.top() << endl; // 100
    pq.push(2);

    pq.pop(); // 100 pops
    cout << pq.top() << endl; // 50

    return 0;
}