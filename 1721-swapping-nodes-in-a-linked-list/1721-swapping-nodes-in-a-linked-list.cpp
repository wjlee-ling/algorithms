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
        ListNode* fast = head;
        ListNode* slow = head;
        
        // k == 1 then, fast-slow == 0 
        for (int i=0; i<k-1; i++) {
            fast = fast->next;
        }
        ListNode* target1 = fast;
        
        while (true) {
            if (fast->next == nullptr) {
                ListNode* target2 = slow;
                int temp = target2->val;
                target2->val = target1->val;
                target1->val = temp;
                break;
            }            
            
            slow = slow->next;
            fast = fast->next;
        }
        
        return head;
    }
};