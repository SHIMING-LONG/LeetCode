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
   ListNode* reverseNodes(ListNode* head){
        ListNode *prev = nullptr;
        ListNode *cur = head;
        while(cur){
            ListNode* nextNode = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nextNode;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if (!head) return nullptr;
        head = reverseNodes(head);
        ListNode* cur=head;
        int maxVal = cur->val;
        while(cur && cur->next){
            if(cur->next->val < maxVal){
                ListNode* imp=cur->next;
                cur->next=cur->next->next;
    

            }
            else{cur=cur->next;
            maxVal=cur->val;}
        }
        
        return reverseNodes(head);

        
    }
};