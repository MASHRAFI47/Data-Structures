#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    while (m--)
    {
        int value;
        cin >> value;

        bool found = false;

        int l = 0;
        int r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (arr[mid] == value)
            {
                found = true;
                break;
            }
            else if (arr[mid] > value)
            {
                r = mid - 1;
            }
            else if (arr[mid] < value)
            {
                l = mid + 1;
            }
        }

        if (found)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}