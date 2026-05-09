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
        ListNode* dummyhead=new ListNode(0);
        ListNode* fast=head;// slow 从 dummy 开始
        ListNode* slow=dummyhead;// fast 从 head 开始
        dummyhead->next=head;
        // 3. fast 先走 n 步
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        // 4. fast 和 slow 同时走，直到 fast 走到链表尽头 (nullptr)
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        // 5. 此时 slow 停在了要删除节点的前一个位置
    // 执行删除操作：跳过 slow 后面的那个节点
        ListNode* tep=slow->next;
        slow->next=slow->next->next;
        delete tep;
        ListNode* newhead=dummyhead->next;// 记录新的头节点（原 head
        delete dummyhead;
        return newhead;
    }
};