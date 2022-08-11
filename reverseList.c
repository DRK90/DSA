/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * list1 = [1,2,4], list2 = [1,3,4]
 */
#include <stdio.h>
#include <stdlib.h>

    struct ListNode {
        int val;
        struct ListNode* next;
    };

struct ListNode* reverseList(struct ListNode* head){
    
    struct ListNode* curr = head;
    struct ListNode* next = NULL;
    struct ListNode* prev;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;        
    }
    
    return prev;

}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * list1 = [1,2,4], list2 = [1,3,4]
 */

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

    struct ListNode* test = reverseList(head1);

    while(test){
        printf("%d\n", test->val);
        test = test->next;
    }
    
}