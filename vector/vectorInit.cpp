#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v; //type 1 - initialization;
    //vector<int> v(10); // type 2 - init with size;
    //vector<int> v(10, -1); // type 3 - vector init with all same values
    //vector<int> v2(v);  //type 4 - copy of first vector

    //int arr[5] = {1, 2, 3, 4, 5};
    //vector<int> v(arr, arr+5); // type 5 - copy of int array in vector

    //vector<int> v = {1, 3, 5, 7}; // type 6 - not working properly

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}