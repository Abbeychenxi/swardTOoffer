////
////  27.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////二叉搜索树和双向链表
////输入一个二叉搜索树，将该二叉搜索树转换成一个排序的双向链表
////不能创建新的节点，只能调整结点指针的指向
//
//#include <iostream>
//
//using namespace std;
//
//struct treeNode {
//    int _value;
//    treeNode* _left;
//    treeNode* _right;
//};
//
//void ConvertNode(treeNode* root, treeNode** last) {
//    if (root == NULL) {
//        return;
//    }
//    
//    treeNode* index = root;
//    if (index -> _left) {
//        ConvertNode(index->_left, last);
//    }
//    index->_left = *last;
//    if (*last != NULL) {
//        (*last)->_right = index;
//    }
//    *last = index;
//    if (index->_right != NULL) {
//        ConvertNode(index->_right, last);
//    }
//}
//
//treeNode* Convert(treeNode* root) {
//    treeNode* last = NULL;
//    ConvertNode(root, &last);
//    treeNode* head = last;
//    while (head != NULL && head->_left != NULL) {
//        head = head->_left;
//    }
//    return head;
//}
