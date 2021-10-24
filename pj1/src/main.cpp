#include <iostream>
#include <stdio.h>

#include "my_class.h"

using namespace std;
 
int main(int argc,  char *argv[])
{
    ListNode a(10); //head
    ListNode b(20);
    ListNode c(30);
    ListNode d(40);
    ListNode e(50);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    e.next=NULL;

    Solution solve;
    ListNode *head =&a;
    while(head)
    {
        cout<<head->val<<endl;
        head=head->next;
 
    }
    head=solve.revereList(&a);
    cout<<"after reverse:\n";
    while(head)
    {
        cout<<head->val<<endl;
        head=head->next;
    }
    return 0;
}