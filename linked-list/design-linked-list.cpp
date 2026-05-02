class MyLinkedList {
public:
    
    // 定义节点结构
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int x): val(x),next(nullptr){};\
        // 构造函数，方便快速创建节点
    };
    // MyLinkedList() 初始化 MyLinkedList 对象
    MyLinkedList() {
        _dummyhead=new ListNode(0);
        _size=0;
    }
   
    
// 获取到第index个节点数值，如果index是非法数值直接返回-1， 注意index 是从0开始的，第0个节点就是头结点
    int get(int index) {
        if(index<0 || index>_size-1){ return -1;}
        ListNode *cur=_dummyhead->next;
        while(index--){
            cur=cur->next;
        }
        return cur->val;
        
    }
    // 在链表最前面插入一个节点，插入完成后，新插入的节点为链表的新的头结点
    void addAtHead(int val) {
        ListNode* newnode=new ListNode(val);
        newnode->next=_dummyhead->next;
        _dummyhead->next=newnode;
        _size++;
        
    }
    // 在链表最后面添加一个节点
    void addAtTail(int val) {
        ListNode* tailnode=new ListNode(val);
        ListNode* cur=_dummyhead;
        while(cur->next !=nullptr){cur=cur->next;}
        cur->next=tailnode;
        _size++;
        
    }
    
    void addAtIndex(int index, int val) {
        
        if(index>_size){return;}
        ListNode* Newnode=new ListNode(val);
        ListNode *watching=_dummyhead;
        
        
        while(index--){
            watching=watching->next;
        }
        Newnode->next=watching->next;
        watching->next=Newnode;
        _size++;

    }
    // 如果你想删除第 index 个节点，你必须站在它“前一个”节点的位置上
    void deleteAtIndex(int index) {
        if(index>=_size || index<0){return;}
        ListNode* cur=_dummyhead;
        while(index--){
            cur=cur->next;
        }
        ListNode* tmp=cur->next;
        cur->next=cur->next->next;
        delete tmp;
        tmp=nullptr;
        _size--;

        
    }
    private:
    int _size;
    ListNode* _dummyhead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */