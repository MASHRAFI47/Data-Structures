//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.size(); i++) {
            if(st.empty()) {
                st.push(s[i]);
            }
            else {
                if(st.top() == s[i]) {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
        }

        stack<char>st2;
        while(!st.empty()) {
            st2.push(st.top());
            st.pop();
        }

        string s2;
        while(!st2.empty()) {
            s2.push_back(st2.top());
            st2.pop();
        }

        return s2;
    }
};