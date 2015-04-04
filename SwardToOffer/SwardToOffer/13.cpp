////
////  13.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/4.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////O(1)时间删除链表节点
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
//void DeleteNode(ListNode** listHead, ListNode* pToBeDeleted){
//    if (listHead == NULL || pToBeDeleted == NULL) {
//        return;
//    }
//    
//    if (pToBeDeleted->_next != NULL) {
//        ListNode *pNext = pToBeDeleted->_next;
//        pToBeDeleted->_value = pNext->_value;
//        pToBeDeleted->_next = pNext->_next;
//        
//        //delete pNext;
//        pNext = NULL;
//    }else if(*listHead == pToBeDeleted){
//        delete pToBeDeleted;
//        pToBeDeleted = NULL;
//        *listHead = NULL;
//    }else {
//        ListNode* index = *listHead;
//        while (index->_next != pToBeDeleted) {
//            index = index->_next;
//        }
//        
//        index->_next = NULL;
//        delete pToBeDeleted;
//        pToBeDeleted = NULL;
//    }
//}
//
//int main(){
//    ListNode p1, p2, p3;
//    p1._value = 1;
//    p2._value = 2;
//    p3._value = 3;
//    p1._next = &p2;
//    p2._next = &p3;
//    p3._next = NULL;
//    ListNode* head = &p1;
//    DeleteNode(&head, &p2);
//    return 0;
//}