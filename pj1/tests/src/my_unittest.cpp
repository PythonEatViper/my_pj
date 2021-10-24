#include <gtest/gtest.h>
//#include "gmock/gmock.h"

// Functions to test
#include "my_class.h"
#include "my_class.cpp"



TEST(get_number_test, returns_correct_value) {
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
    head=solve.revereList(&a);

    ASSERT_EQ(head->val, e.val);
}


int main(int argc,  char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
