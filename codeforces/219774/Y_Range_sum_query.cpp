// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int>arr(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<long long>pre(n+1);
    pre[1] = arr[1];
    for(int i = 2; i <= n; i++) {
        pre[i] = pre[i-1] + arr[i];
    }

    while(m--) {
        int l, r;
        cin >> l >> r;

        long long sum;
        if(l == 1) {
            sum = pre[r];
        }
        else {
            sum = pre[r] - pre[l-1];
        }

        cout << sum << endl;
    }

    return 0;
}