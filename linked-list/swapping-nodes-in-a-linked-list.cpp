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
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        //快慢指针
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* node1=nullptr;
        // --- 第一步：定位正数第 k 个节点 ---
        for(int i=0;i<k-1;i++){
            fast=fast->next;

        }
        node1=fast;//正数第k个
        ListNode* temp=fast; // 这里的 temp 是为了不弄丢 node1 的位置
        // --- 第二步：定位倒数第 k 个节点 ---
    // 思路：让 slow 从头开始，和 fast 保持 k-1 的间距
    // 当 fast 走到结尾，slow 刚好就在倒数第 k 个
        while(temp->next!=nullptr){
            temp=temp->next; //// temp 往后探路
            slow=slow->next;// slow 跟上
        }
        ListNode* node2=slow;//倒数第k个
        int n=node1->val;
        node1->val=node2->val;
        node2->val=n;
        return head;
    
}
};