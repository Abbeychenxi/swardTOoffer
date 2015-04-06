////
////  39.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/6.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////二叉树的深度
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
//int treeDepth(treeNode* root) {
//    if (root == NULL) {
//        return 0;
//    }
//    int left = treeDepth(root->_left);
//    int right = treeDepth(root->_right);
//    
//    return (left > right) ? (left+1) : (right+1);
//}
//
////判断一个树是否是平衡二叉树
//bool isBalancedTree(treeNode* root) {
//    if (root == NULL) {
//        return true;
//    }
//    int left = treeDepth(root->_left);
//    int right = treeDepth(root->_right);
//    int diff = abs(left - right);
//    if (diff > 1) {
//        return false;
//    }
//    return isBalancedTree(root->_left) && isBalancedTree(root->_right);
//}
//
//bool isBanlance(treeNode* root, int* depth) {
//    if (root == NULL) {
//        *depth = 0;
//        return true;
//    }
//    
//    int left, right;
//    if (isBanlance(root->_left, &left) && isBanlance(root->_right, &right)) {
//        int diff = abs(left - right);
//        if (diff <= 1) {
//            *depth = 1 + (left > right ? left : right);
//            return true;
//        }
//    }
//    return false;
//}