////
////  15.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/4.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////链表中的倒数第K个节点
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
//ListNode* KToTail(ListNode* head, unsigned int k){
//    if (head == NULL || k == 0) {
//        return NULL;
//    }
//    
//    ListNode* first = head;
//    ListNode* second = head;
//    for(unsigned int i = 0; i != k; ++i){
//        first = first->_next;
//    }
//    while (first->_next != NULL) {
//        ++first;
//        ++second;
//    }
//    return second;
//}
//
//int main(){
//    ListNode p1,p2,p3;
//    p1._value = 1;
//    p1._next = &p2;
//    p2._value = 2;
//    p2._next = &p3;
//    p3._value = 3;
//    p3._next = NULL;
//    ListNode* result = KToTail(&p1, 2);
//    cout << result->_value << endl;
//}