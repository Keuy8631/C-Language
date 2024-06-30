#include <iostream>

// 定義鏈表節點結構
struct Node {
    int data;
    Node* next;
};

// 插入新節點到鏈表尾部
void append(Node** head_ref, int new_data){
    // 分配新節點的記憶體空間
    Node* new_node = new Node();
    Node* last = *head_ref; // 用於遍歷鏈表

    // 設置新節點的數據
    new_node->data = new_data;
    new_node->next = nullptr;

    // 如果鏈表是空的，將新節點設置為頭節點
    if(*head_ref == nullptr){
        *head_ref = new_node;
        return;
    }

    // 找到鏈表的最後一個節點
    while(last->next != nullptr)
        last = last->next;

    // 將新節點連接到最後一個節點
    last->next = new_node;
}

// 在鏈表中打印節點的數據
void printList(Node* node){
    while (node != nullptr){
        std::cout << node->data << " ";
        node = node->next;
    }
}

int main(){
    // 初始化鏈表為空
    Node* head = nullptr;

    // 向鏈表中插入數據
    append(&head, 6);
    append(&head, 3);
    append(&head, 9);
    append(&head, 5);

    // 打印鏈表中的數據
    std::cout << "Linked List: ";
    printList(head);

    return 0;
}
