#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    mp["Hamim"] = 5; //logN
    mp["Ramim"] = 2;
    mp["Mashrafi"] = 500;
    mp["Rakib"] = 0;

    for(auto it = mp.begin(); it != mp.end(); it++) {   // O(logN)
        cout << it->first << " " << (*it).second << endl; // logN
    }
    //total O(NlogN);

    if(mp.count("Rakib")) {
        cout << "Ache" << endl;
    }
    else {
        cout << "Nai" << endl;
    }
    return 0;
}