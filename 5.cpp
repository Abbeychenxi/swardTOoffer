//
//  main.cpp
//  tes
//
//  Created by 陈希 on 15/4/4.
//  Copyright (c) 2015年 陈希. All rights reserved.
//

//从尾到头打印链表
#include <iostream>

using namespace std;

struct ListNode
{
    int _value;
    ListNode* _next;
};

void printReverseList(ListNode* head){
    if(head != NULL){
        if(head->_next != NULL)
            printReverseList(head->_next);
        cout << head->_value << ' ';
    }
}

int main(int argc, char const* argv[])
{
    ListNode p1, p2, p3;
    p1._value = 1;
    p2._value = 2;
    p3._value = 3;
    p1._next = &p2;
    p2._next = &p3;
    p3._next = NULL;
    ListNode *head = &p1;
    printReverseList(head);
    return 0;
}