//https://www.naukri.com/code360/problems/min-stack_3843991?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	public:
		stack<int> st;
		stack<int> mn;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			st.push(num);
			if(mn.empty()) {
				mn.push(num);
			}
			else {
				if(mn.top() >= num) {
					mn.push(num);
				}
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{	
			if(st.empty()) {
				return -1;
			}
			int val = st.top();
			if(st.top() == mn.top()) {
				mn.pop();
			}
			st.pop();

			return val;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(st.empty()) {
				return -1;
			}
			return st.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(st.empty()) {
				return -1;
			}
			return mn.top();
		}
		
};