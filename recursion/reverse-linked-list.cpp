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
    ListNode* reverseList(ListNode* head) {
        ListNode* node; // new node
        ListNode* pre=NULL;
        ListNode* cur=head;
        while(cur){
            node=cur->next;
            cur->next=pre;
            pre=cur;
            cur=node;
        }
        return pre;

    }
};