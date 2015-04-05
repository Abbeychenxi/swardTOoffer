////
////  17.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////合并两个链表
//
//#include <iostream>
//
//using namespace std;
//
//struct ListNode{
//    int _value;
//    ListNode* _next;
//};
//
//ListNode* Merage(ListNode* head1, ListNode* head2) {
//    if (head1 == NULL) {
//        return head2;
//    }else if (head2 == NULL) {
//        return head1;
//    }
//    ListNode* head = NULL;
//    if (head1->_value < head2->_value) {
//        head = head1;
//        head->_next = Merage(head1->_next, head2);
//    }else {
//        head = head2;
//        head->_next = Merage(head1, head2->_next);
//    }
//    return head;
//}
//
//int main() {
//    ListNode i1,i2,i3;
//    ListNode j1,j2,j3;
//    i1._value = 0;
//    i2._value = 2;
//    i3._value = 4;
//    i1._next = &i2;
//    i2._next = &i3;
//    i3._next = NULL;
//    j1._value = 1;
//    j2._value = 3;
//    j3._value = 5;
//    j1._next = &j2;
//    j2._next = &j3;
//    j3._next = NULL;
//    ListNode* head = Merage(&i1, &j1);
//    while (head->_next != NULL) {
//        cout << head->_value << endl;
//        head = head->_next;
//    }
//}