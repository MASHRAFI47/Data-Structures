#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     // for(int j = 1; j <= n-i; j++) {
    //     //     cout << " ";
    //     // }
    //     for(int j = 1; j <= n; j++) {
    //         if(j == i) {
    //             cout << "\\";
    //         }
    //         else {
    //             cout << " ";
    //         }

    //         if((i+j) == (n+1)) {
    //             cout << "/";
    //         }
    //     }
    //     cout << endl;
    // }

    // for(int i = 1; i <= n; i++) {
    //     // for(int j = 1; j <= n-i; j++) {
    //     //     cout << " ";
    //     // }
    //     for(int j = 1; j <= n/2; j++) {
    //         if((i+j) == (n+1)) {
    //             cout << "/";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    int count = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int mid = n/2 + 1;
            
            int copyJ = j;

            if(j == mid && i == (n/2+1)) {
                cout << "X";
            }
            else if(i == j) {
                cout << "\\"; 
            }
            else if(count == j) {
                cout << "/";
            }
            else {
                cout << " ";
            }

        }
        count--;
        cout << endl;
    }

    return 0;
}