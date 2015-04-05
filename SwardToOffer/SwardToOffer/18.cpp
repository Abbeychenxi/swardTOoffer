////
////  18.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////树的子结构
////输入两个二叉树A, B,判断B是不是A的子结构
//
//#include <iostream>
//
//using namespace std;
//
//struct treeNode{
//    int _value;
//    treeNode* _left;
//    treeNode* _right;
//};
//
//bool compareAwithB(treeNode* A, treeNode* B) {
//    if (B == NULL) {
//        return true;
//    }
//    if (A == NULL) {
//        return false;
//    }
//    if (A->_value == B->_value) {
//        return compareAwithB(A->_left, B->_left) && compareAwithB(A->_right, B->_right);
//    }
//    return false;
//}
//
//bool hasSubTree(treeNode* A, treeNode* B) {
//    bool result = false;
//    if (A != NULL && B != NULL) {
//        if (A->_value == B->_value) {
//            result = compareAwithB(A, B);
//        }
//        if (!result) {
//            result = hasSubTree(A->_left, B);
//        }
//        if (!result) {
//            result = hasSubTree(A->_right, B);
//        }
//    }
//    return result;
//}
//
//int main() {
//    treeNode a1,a2,a3,a4,a5;
//    a1._value = 8;
//    a2._value = 8;
//    a3._value = 7;
//    a4._value = 9;
//    a5._value = 2;
//    a1._left = &a2;
//    a1._right = &a3;
//    a3._left = NULL;
//    a3._right = NULL;
//    a2._left = &a4;
//    a2._right = &a5;
//    a4._left = NULL;
//    a4._right = NULL;
//    a5._left = NULL;
//    a5._right = NULL;
//    treeNode b1,b2,b3;
//    b1._value = 8;
//    b2._value = 9;
//    b3._value = 2;
//    b1._left = &b2;
//    b1._right = &b3;
//    b2._left = NULL;
//    b2._right = NULL;
//    b3._right = NULL;
//    b3._left = NULL;
//    treeNode* h1 = &a1;
//    treeNode* h2 = &b1;
//    cout << hasSubTree(h1, h2) << endl;
//}