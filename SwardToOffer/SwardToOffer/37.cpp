////
////  37.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/6.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////两个链表的第一个公共节点
////长链表先走abs(l1-l2)步
//
//#include <iostream>
//
//using namespace std;
//
//struct ListNode {
//    int _value;
//    ListNode* _next;
//};
//
//unsigned int GetListLength(ListNode* head) {
//    unsigned int length = 0;
//    ListNode* index = head;
//    while (index != NULL) {
//        ++length;
//        index = index->_next;
//    }
//    return length;
//}
//
//ListNode* FindFirstCommonNode(ListNode* head1, ListNode* head2) {
//    unsigned int l1 = GetListLength(head1);
//    unsigned int l2 = GetListLength(head2);
//    unsigned int step = 0;
//    if (l1 > l2) {
//        step = l1 - l2;
//        while (step != 0) {
//            head1 = head1->_next;
//            --step;
//        }
//    }else {
//        step = l2 - l1;
//        while (step != 0) {
//            head2 = head2->_next;
//            --step;
//        }
//    }
//    while (head1 != NULL && head2 != NULL && head1 != head2) {
//        head1 = head1->_next;
//        head2 = head2->_next;
//    }
//    return head1;
//}