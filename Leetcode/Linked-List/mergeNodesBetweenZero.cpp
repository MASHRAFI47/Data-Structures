/**
 * https://leetcode.com/problems/merge-nodes-in-between-zeros/submissions/1496076116/
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp = head->next;
        ListNode* tail = head;

        int sum = 0;
        while(tmp != NULL) {
            sum += tmp->val;
            if(tmp->val == 0) {
                ListNode* newNode = new ListNode(sum);
                tail->next = newNode;
                tail = newNode;
                sum = 0;
            }

            tmp = tmp->next;
        }
        return head->next;
    }
};