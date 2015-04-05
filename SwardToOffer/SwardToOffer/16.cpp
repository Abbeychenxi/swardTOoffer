////
////  16.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////反转链表
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
//ListNode* Reverse(ListNode* head){
//    ListNode* index = head;
//    ListNode* pre = NULL;
//    ListNode* ReverseHead = NULL;
//    while (index != NULL) {
//        ListNode* next = index->_next;
//        
//        if (next == NULL) {
//            ReverseHead = index;
//        }
//        index->_next = pre;
//        pre = index;
//        index = next;
//    }
//    return ReverseHead;
//}
//
//int main() {
//    ListNode p1,p2,p3;
//    p1._value = 1;
//    p1._next = &p2;
//    p2._value = 2;
//    p2._next = &p3;
//    p3._value = 3;
//    p3._next = NULL;
//    ListNode* head = &p1;
//    ListNode* result = Reverse(head);
//    cout << result->_value << endl;
//}