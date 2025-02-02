// https://www.naukri.com/code360/problems/maximum-equal-stack-sum_1062571

#include <bits/stdc++.h> 
    int getSum(stack<int> st) {
        int sum = 0;
        while(!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
int maxSum(stack<int> &st, stack<int> &st2, stack<int> &st3) {
    int sum1 = getSum(st);
    int sum2 = getSum(st2);
    int sum3 = getSum(st3);

    while(true) {
        if(sum1 == sum2 && sum2 == sum3) {
            break;
        }

        if(sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= st.top();
            st.pop();
        }
        else if(sum2 >= sum3 && sum2 >= sum1) {
            sum2 -= st2.top();
            st2.pop();
        }
        else {
            sum3 -= st3.top();
            st3.pop();
        }
    }
    return sum1;
}