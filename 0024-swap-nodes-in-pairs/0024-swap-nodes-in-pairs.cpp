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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        
        ListNode* left = head;
        ListNode* right = left->next;
        ListNode* prev = new ListNode();
        // need a new start b/c the starting point changes
        ListNode* start = head->next;
        bool flag = true;
        
        while (left != nullptr && right != nullptr) {
            if (flag) {
                ListNode* newNode = right->next;
                //swap
                right->next = left;
                left->next = newNode;
                if (left != head) {
                    prev->next = right;
                } 
                
                flag = false;
                
            } else {
                flag = true;
                prev = left;
                left = left->next;
                right = left ? left->next: nullptr;
            }
        }
        return start;
    }
};