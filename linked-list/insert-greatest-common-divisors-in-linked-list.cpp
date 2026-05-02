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
    int gcd(int a, int b){
        while(b!=0){
            int tmp=a%b;
            a=b;
            b=tmp;
        }
        return a;
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* cur=head;
        while(cur!= nullptr && cur->next !=nullptr ){
            int val1=cur->val;
            int val2=cur->next->val;
            int gcdval=gcd(val1,val2);
            ListNode* g=new ListNode(gcdval);
            g->next=cur->next;
            cur->next=g;
            cur=g->next;//往后挪
        }
        return head;
        
    }
};