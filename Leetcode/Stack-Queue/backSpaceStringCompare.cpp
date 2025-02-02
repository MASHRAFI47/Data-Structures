//https://leetcode.com/problems/backspace-string-compare/submissions/1501704713/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st2;

        for(char c : s) {
            if(c == '#') {
                if(!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(c);
            }
        }

        for(char c : t) {
            if(c == '#') {
                if(!st2.empty()) {
                    st2.pop();
                }
            }
            else {
                st2.push(c);
            }
        }

        return st == st2;
    }
};





class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> st2;

        for(char c : s) {
            if(c == '#' && st.empty()) {
                continue;
            } else {
                if(c == '#') {
                    st.pop();
                }
                else {
                    st.push(c);
                }
            }
        }


        for(char c : t) {
            if(c == '#' && st2.empty()) {
                continue;
            } else {
                if(c == '#') {
                    st2.pop();
                }
                else {
                    st2.push(c);
                }
            }
        }

        if(st == st2) {
            return true;
        }
        else {
            return false;
        }
    }
};