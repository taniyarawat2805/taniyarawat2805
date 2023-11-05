//if NUM_LINKEDLIST is not defined already. Below code runs once only. Usefule when same header is used by multiple programs

#ifndef NUM_LINKEDLIST
#define NUM_LINKEDLIST

struct Node {
    char data[5];
    struct Node* next;
};

void InsertNumber(struct Node** head, const char* data);
void DisplayList(struct Node* head);
void AddLinkedList(struct Node* head);
void SubLinkedlist(struct Node* head);
void multilist(struct Node* head);
void divi(struct Node* head);
#endif