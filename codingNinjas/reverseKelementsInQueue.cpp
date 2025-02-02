//https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;

    for(int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }

    queue<int> q2;
    while(!st.empty()) {
        q2.push(st.top());
        st.pop();
    }
    while(!q.empty()) {
        q2.push(q.front());
        q.pop();
    }

    q = q2;
    return q;
}
