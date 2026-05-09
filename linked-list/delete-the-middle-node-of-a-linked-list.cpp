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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode* dummyhead=new ListNode(0);
        dummyhead->next=head;;
        ListNode* fast=head;
        ListNode* slow=dummyhead;
        //法1:快慢指针，快走 2 步，慢走 1 步
        //while(fast!=NULL && fast->next!=NULL){
          //  fast=fast->next->next;
            //slow=slow->next;
        //}
        //法2:先算长度 n，再走 n/2 步
        ListNode *cur=head;
        // 计算Listnode的长度
        int n=0;
        while(cur!=nullptr){
            n++;
            cur=cur->next;
        }
        // 法1
       // ListNode* tep=slow->next;
        //slow->next=slow->next->next;
       // delete tep;
        //delete dummyhead;
        //return head;
        //法2
        for(int i=0; i<(n/2);i++){
            slow=slow->next;
        }
        ListNode* target=slow->next;
        slow->next=slow->next->next;
        delete target;
        ListNode* newhead=dummyhead->next;
        delete dummyhead;
        return newhead;
    }
};