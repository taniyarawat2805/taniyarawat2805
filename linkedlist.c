//this file contains all logic and is called by main.c 

#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InsertNumber(struct Node** head, const char* data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    strcpy(new_node->data, data);
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void DisplayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%s -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void AddLinkedList(struct Node* head)
{
    struct Node* current =head;
     unsigned int  addValue=0;

    while (current != NULL) {
        addValue = addValue + atoi(current->data);
        current = current->next;
    }   
    printf("Add value %d : ", addValue);
}

void SubLinkedlist(struct Node*head)
{
    struct Node* current=head;
   unsigned int subvalue,val1,val2;
    val1 = (atoi(current->data));
        current = current->next;
        val2 = (atoi(current->data));
        subvalue = val1-val2;
    printf("sub value %d : ", subvalue);
}
 void multilist(struct Node*head) {
    struct Node* current =head;
   unsigned int multivalue=1;
    while (current != NULL) {
        multivalue =  atoi(current->data)* multivalue ;
        current = current->next;
    }
    printf("multivalue %d : ", multivalue);
}
  void divi(struct Node*head)
  {
    struct Node* current =head;
    unsigned int val1,val2;
     float ans;
    //  while (current != NULL) {
       val1 = (atoi(current->data));
        printf("VAL %d : ", val1);
        current = current->next;
        val2 = (atoi(current->data));
        printf("VAL %d : ", val2);
    // }
    ans = val1/(float)val2;
    printf("divivalue %f : ", ans);
}