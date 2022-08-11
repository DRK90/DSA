/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * list1 = [1,2,4], list2 = [1,3,4]
 */
#include<stdio.h>
#include<stdlib.h>

    struct ListNode {
        int val;
        struct ListNode* next;
    };


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode output;
    struct ListNode* ptr = &output;
    while(list1 && list2){
        if(list1->val <= list2->val){
            ptr->next = list1;
            list1 = list1->next;
            ptr = ptr->next;
        } else if (list1 -> val > list2->val){
            ptr->next = list2;
            list2 = list2 -> next;
            ptr = ptr->next;
        }
    }
    if(list1){
        ptr->next = list1;
    }
    if(list2){
        ptr->next = list2;
    }

    return output.next;
}


void main(){


    struct ListNode* node1;
    node1 = malloc(sizeof(struct ListNode));
    struct ListNode* node2;
    node2 = malloc(sizeof(struct ListNode));
    struct ListNode* node3;
    node3 = malloc(sizeof(struct ListNode));
    struct ListNode* node4;
    node4 = malloc(sizeof(struct ListNode));
    struct ListNode* node5;
    node5 = malloc(sizeof(struct ListNode));
    struct ListNode* node6;
    node6 = malloc(sizeof(struct ListNode));

    struct ListNode* head1 = node1;
    struct ListNode* head2 = node4;


    node1->val = 1;
    node1->next = node2;
    node2->val = 2;
    node2->next = node3;
    node3->val = 4;

    node4->val = 1;
    node4->next = node5;
    node5->val = 3;
    node5->next = node6;
    node6->val = 4;

    struct ListNode* test = mergeTwoLists(head1, head2);

    while(test){
        printf("%d\n", test->val);
        test = test->next;
    }
    
}