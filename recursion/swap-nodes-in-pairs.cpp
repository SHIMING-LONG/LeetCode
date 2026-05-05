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
        ListNode *dummyhead=new ListNode(0);
        dummyhead->next=head;
        ListNode* cur=dummyhead;
        while(cur->next !=nullptr && cur->next->next !=nullptr){
            ListNode* tmp=cur->next;
            ListNode* tep=cur->next->next->next;
            cur->next=cur->next->next;//交换2 and 1
            cur->next->next=tmp;
            cur->next->next->next=tep;
            cur = tmp;
        }
        ListNode* results=dummyhead->next;
        delete dummyhead;
        return results;
        
    }
};