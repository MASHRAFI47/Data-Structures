#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);


    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        totalSum += arr[i];
    }

    vector<int> pre(n);
    pre[0] = arr[0];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + arr[i];
    }

    int ans = -1;
    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - pre[i];

        if(pre[i] == rightSum) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}