typedef struct node{
    int data;
    struct node *next;
} NODE;

NODE *createList(int*, int);     /* 建立函數 */
void printList(NODE*);           /* 列印函數 */
void freeList(NODE*);            /* 釋放串列記憶空間函數 */
void insertNode(NODE*, int);     /* 插入節點函數 */
NODE *searchNode(NODE*, int);    /* 搜尋節點函數*/
NODE *deleteNode(NODE*, NODE*);  /* 刪除節點函數*/