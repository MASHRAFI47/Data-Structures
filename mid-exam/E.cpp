#include <bits/stdc++.h>
using namespace std;

int sz = 0;

void print_list(list<int>l, int value) {
        cout << "L -> ";
        for(int val : l) {
            cout << val << " ";
        }
        cout << endl;
        
        list<int>l2(l);
        l2.reverse();
        cout << "R -> ";
        for(int val : l2) {
            cout << val << " ";
        }
        cout << endl;
}

int main() {
    list<int>l;

    int q;
    cin >> q;

    while(q--) {
        int index, value;
        cin >> index >> value;

        if(index == 2 && value < sz){
            sz--;
            l.erase(next(l.begin(), value));

            print_list(l, value);
        }
        else if(index == 0) {
            sz++;
            l.push_front(value);

            print_list(l, value);
        }
        else if(index == 1) {
            sz++;
            l.push_back(value);

            print_list(l, value);
        }
        else {
            print_list(l, value);
        }
    }

    return 0;
}