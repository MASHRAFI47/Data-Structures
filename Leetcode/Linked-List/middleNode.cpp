class Solution {
public:
    int cnt_size(ListNode* head) {
        int cnt = 0;
        ListNode* tmp = head;
        while(tmp != NULL) {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int size = cnt_size(head);
        ListNode* tmp = head;
        for(int i = 0; i < (size/2); i++) {
            tmp = tmp->next;
        }
        return tmp;
    }
};