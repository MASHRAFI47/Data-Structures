#include <bits/stdc++.h>
using namespace std;

int main() {
    string colors;
    cin >> colors;

    stack<char> st;

    bool brown = false;
    for(int i = 0; i < colors.size(); i++) {
        if(st.empty()) {
            st.push(colors[i]);
        }
        else {
            if((st.top() == 'R' && colors[i] == 'B') || (st.top() == 'B' && colors[i] == 'R')) {
                st.pop();
            }
            else if((st.top() == 'Y' && colors[i] == 'B') || (st.top() == 'B' && colors[i] == 'Y')) {
                st.pop();
                st.push('G');
            }
            else if((st.top() == 'R' && colors[i] == 'Y') || (st.top() == 'Y' && colors[i] == 'R')) {
                st.pop();
            }
            else if((st.top() == 'G' && colors[i] == 'R') || (st.top() == 'R' && colors[i] == 'G')) {
                brown = true;
                break;
            }
            else {
                st.push(colors[i]);
            }
        }
    }

    if(brown) {
        cout << "Possible" << endl;
    }
    else {
        cout << "Not Possible" << endl;
    }

    return 0;
}