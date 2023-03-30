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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* slow = dummy;
        ListNode* fast = dummy; // dummy for edge case
        int i = 0;
        // slow와 fast 차이가 n 만큼
        while (i < n){
            if (fast->next) {
                fast = fast->next;
            } else return head;
            i++;
        }
        // 종점까지 이동
        cout << slow->val << fast->val <<endl;
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        
        return dummy->next;
    }
};