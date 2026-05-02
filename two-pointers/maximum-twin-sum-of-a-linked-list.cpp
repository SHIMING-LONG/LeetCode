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
    int pairSum(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }// 循环结束时，slow 刚好指向后半部分的开头
        ListNode* pre=NULL;// the head of the last part
        ListNode* cur=slow;
        while(cur){
            ListNode* nodes=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nodes;
        }
        int maxsum=0;
        while(pre){
            maxsum=max(maxsum, pre->val+head->val);
            pre=pre->next;
            head=head->next;
        }

        return maxsum;
    }
};