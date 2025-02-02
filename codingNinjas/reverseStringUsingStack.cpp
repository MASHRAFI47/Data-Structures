//https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	string str;
	stack<char> st;

	for(int i = 0; i < s.size(); i++) {
		st.push(s[i]);
	}

	while(!st.empty()) {
		str.push_back(st.top());
		st.pop();
	}

	return str;
}
