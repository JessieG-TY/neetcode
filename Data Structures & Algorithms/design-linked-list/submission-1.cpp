class MyLinkedList {
//创建一个ListNode，初始int val，创建一个节点叫next,Listnode里面包含val和下一个节点
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int val): val(val), next(nullptr){}
    };
public:
    ListNode* head;
    int size;
    MyLinkedList() {
        head = new ListNode(0);
        size = 0;
    }
    
    int get(int index) {
        if (index >= size) return -1;
        ListNode* cur = head->next; //创造一个cur节点 指向第一个节点 因为head是null
        for (int i = 0; i<index; i++){
            cur = cur->next; //cur往下
        }
        return cur->val; //返回cur指向的val
    }
    
    void addAtHead(int val) {
        ListNode* node = new ListNode(val);
        node->next = head->next;
        head->next = node;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        ListNode* cur = head;
        while (cur->next != nullptr){
            cur = cur->next;
        }
        cur->next = node;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        //{0,1,2,3} 插入4在2前面
        if (index > size) return;
        ListNode* cur = head;
        for (int i = 0;i < index; i++){
            cur = cur->next; 
        }
        ListNode* node = new ListNode(val);
        node->next = cur->next;
        cur->next = node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        //{dummy,0,1,2}
        if (index >= size) return;
        ListNode* cur = head;
        for (int i = 0; i < index; i++){
            cur = cur->next;
        }
        ListNode* temp = cur->next;
        cur->next = cur->next->next; 
        delete temp;
        size--;
    }
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