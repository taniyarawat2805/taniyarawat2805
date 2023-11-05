#include <stdio.h>
#include "linkedlist.h"
#include <conio.h>
int main() 
{
    struct Node* head = NULL; //numbers are added to this head
    char num1[100], num2[100]; //number lenth 5 change to increase

    printf("Enter the first number: ");
    scanf("%s", num1);

    printf("Enter the second number: ");
    scanf("%s", num2);

    InsertNumber(&head, num1);
    InsertNumber(&head, num2);

    printf("LInked List::\n");
    DisplayList(head);
    AddLinkedList(head);
    SubLinkedlist(head);
    multilist(head);
    divi(head);
    getch();
    return 0;
}