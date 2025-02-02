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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head;
        ListNode* right = head;

        ListNode* tmp = head;
        for(int i = 1; i < k; i++) {
            left = left->next;
        }

        int sz = 0;
        while(tmp != NULL) {
            sz++;
            tmp = tmp->next;
        }

        tmp = head;
        for(int i = 1; i <= (sz-k); i++) {
            right = right->next;
        }
        
        swap(left->val, right->val);
        return head;
    }
};