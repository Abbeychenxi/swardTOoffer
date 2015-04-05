////
////  26.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////复杂链表的复制
////ComplexListNode(ComplexListNode* phead);
//
//#include <iostream>
//
//using namespace std;
//
//struct ComplexListNode {
//    int _value;
//    ComplexListNode* _next;
//    ComplexListNode* _sibLing;
//};
//
//void CloneNodes(ComplexListNode* head) {
//    ComplexListNode* index = head;
//    while (index != NULL) {
//        ComplexListNode* cloned = new ComplexListNode();
//        cloned->_value = index->_value;
//        cloned->_next = index->_next;
//        cloned->_sibLing = NULL;
//        
//        index->_next = cloned;
//        
//        index = cloned->_next;
//    }
//}
//
//void ConnectSiblingNodes(ComplexListNode* head) {
//    ComplexListNode* index = head;
//    while (index != NULL) {
//        ComplexListNode* cloned = index->_next;
//        if (index->_sibLing != NULL) {
//            cloned->_sibLing = index->_sibLing->_next;
//        }
//        index = cloned->_next;
//    }
//}
//
//ComplexListNode* reconnectedNodes(ComplexListNode* head) {
//    ComplexListNode* index = head;
//    ComplexListNode* clonedHead = NULL;
//    ComplexListNode* clonedIndex = NULL;
//    
//    if (index != NULL) {
//        clonedHead = clonedIndex = index->_next;
//        index->_next = clonedIndex->_next;
//        index = index->_next;
//    }
//    while (index != NULL) {
//        clonedIndex->_next = index->_next;
//        clonedIndex = clonedIndex->_next;
//        index->_next = clonedIndex->_next;
//        index = index->_next;
//    }
//    return clonedHead;
//}
