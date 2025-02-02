#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l(5, 3);
    list<int> l2;
    list<int> l3(5, 510);

    l2 = l;

    l2.push_front(10);
    l2.push_back(20);

    l2.pop_back();
    l2.pop_front();

    cout << *next(l2.begin(), 2) << endl;

    // l2.insert(next(l2.begin(), 2), 100);
    l2.insert(next(l2.begin(), 2), l3.begin(), l3.end());

    for(int val : l2) {
        cout << val << " ";
    }

    return 0;
}