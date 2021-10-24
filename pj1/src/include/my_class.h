#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <stdlib.h>

struct ListNode {
   int val;
   struct ListNode *next;
   ListNode(int x) :
      val(x), next(NULL) {
  }
};


class Solution{
    public:
        ListNode* revereList(ListNode* head);
};


#endif