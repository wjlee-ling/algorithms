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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int count = 1;
        
        while (count < left) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        ListNode* start = prev;
        ListNode* end = curr;
        while (count <= right) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if (start) start->next = prev;
        else head = prev;
        end->next = curr;
        return head;
    }
};