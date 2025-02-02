#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int n;

    Student(string name, int n) {
        this->name = name;
        this->n = n;
    }
};

class cmp {
    public:
    bool operator()(Student l, Student r) {
        if(l.name > r.name) {
            return true;
        }
        else if(l.name < r.name) {
            return false;
        }
        else {
            return l.n < r.n;
        }
    }
};

int main() {
    priority_queue<Student, vector<Student>, cmp > pq;
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        string name;
        int n;
        cin >> name >> n;

        Student obj(name, n);
        pq.push(obj);
    }

    while(!pq.empty()) {
        cout << pq.top().name << " " << pq.top().n << endl;
        pq.pop();
    }
    return 0;
}