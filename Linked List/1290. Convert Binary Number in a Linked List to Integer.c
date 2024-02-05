/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int res = 0;
    struct ListNode* i = head;
    while(i){
        printf("pre res=%d\n",res);
        res <<= 1;
        printf("aft res=%d\n",res);
        res |= i->val;
        i = i->next;
        printf("res=%d\n",res);
    }
    printf("ans=%d",res);
    return res;
}