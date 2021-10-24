#include "my_class.h"


ListNode* Solution::revereList(ListNode* head){
    /*
    ListNode *new_head=NULL;
    while(head)
    {
    ListNode *next=head->next;
        head->next=new_head;
        new_head=head;
        head=next;
    }
    return new_head;
    */

    ListNode* pre = NULL;
    ListNode* cur = head; 
    ListNode* next = NULL;
    while(cur != NULL){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;

}