#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        totalSum += v[i];
    }

    vector<int> pre(n);
    pre[0] = v[0];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + v[i];
    }

    int ans = -1;

    int rightSum;
    int leftSum;
    for(int i = 0, j = n - 1; i < n; i++, j--) {
        if(n%2 == 0) {
            rightSum = totalSum - pre[i];
            if(pre[i] == rightSum) {
                ans = i;
                break;
            }
        }
        else {
            rightSum = totalSum - pre[i];
            leftSum = totalSum - pre[j];
            if(leftSum == rightSum) {
                ans = i;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}