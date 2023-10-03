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
    bool isPalindrome(ListNode* head) {
        ListNode *mid = middle(head);
        if(mid == head) return true;
        reverse(mid);
        while(mid){
            if(head->val != mid->val) return false;
            mid = mid->next;
            head = head->next;
        }
        
        return true;
    }
    
    ListNode* middle(ListNode* head){
        ListNode *fast, *slow;
        slow = head;
        fast = head;
        while(fast != nullptr and fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }..
        if(fast != nullptr and slow != head) slow = slow->next;
        return slow;
    }
    
    void reverse(ListNode*& head){
        ListNode *prev = NULL, *temp;
        while(head != NULL){
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        head = prev; // Corrected this line
    }
};
