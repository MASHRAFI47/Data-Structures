/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return head;
        
        ListNode* tmp = head;
        vector<int> vec;
        while(tmp != NULL && tmp->next != NULL) {
            vec.push_back(tmp->val);
            tmp = tmp->next->next;
        }
        //any left value check;
        if(tmp) {
            vec.push_back(tmp->val);
        }

        tmp = head->next;
        while(tmp != NULL && tmp->next != NULL) {
            vec.push_back(tmp->val);
            tmp = tmp->next->next;
        }
        if(tmp) {
            vec.push_back(tmp->val);
        }

        tmp = head;
        for(int i = 1; i < vec.size(); i++) {
            ListNode* newVal = new ListNode(vec[i]);
            tmp->next = newVal;
            tmp = newVal;
        }
        return head;
    }
};