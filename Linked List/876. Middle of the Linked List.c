/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int cnt = 0;
    struct ListNode* p = head;
    while(p){
        cnt++;
        p = p->next;
    }
    cnt /= 2;
    for(int i=0; i<cnt; i++){
        head = head->next;
    }
    return head;
}


// or


struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* p1 = head;
    struct ListNode* p2 = head;

    if(!head) return 0;
    else{
        while(p2 && p2->next){
            p2 = p2->next->next;
            p1 = p1->next;
        }
        return p1;
    }

}