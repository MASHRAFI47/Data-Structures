#include <bits/stdc++.h>
using namespace std;

class Students {
    public:
    string name;
    float cgpa;
};

int main() {
    int n;
    cin >> n;
    Students arr[n];

    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].cgpa;
    }

    // for(int i = 0; i < n; i++) {
    //     cout << arr[i].name << endl;
    //     cout << arr[i].cgpa << endl;;
    // }

    int index = -1;
    float max = -1.0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i].cgpa > 3.5) {
            count++;
        }
        if(arr[i].cgpa > max) {
            max = arr[i].cgpa;
            index = i;
        }
    }

    cout << count << endl;

    cout << arr[index].name << " " << arr[index].cgpa << endl;

    return 0;
}