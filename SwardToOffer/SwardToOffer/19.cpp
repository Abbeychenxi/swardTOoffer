////
////  19.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////二叉树的镜像
////输入一个二叉树，该函数输出它的镜像
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
//void mirrorTree(treeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    if (root->_left == NULL && root->_right == NULL) {
//        return;
//    }
//    treeNode *temp = root->_left;
//    root->_left = root->_right;
//    root->_right = temp;
//    
//    if (root->_left) {
//        mirrorTree(root->_left);
//    }
//    if (root->_right) {
//        mirrorTree(root->_right);
//    }
//}
//
//int main() {
//    treeNode a1, a2, a3;
//    a1._value = 1;
//    a2._value = 2;
//    a3._value = 3;
//    a1._left = &a2;
//    a1._right = &a3;
//    a2._left = NULL;
//    a2._right = NULL;
//    a3._left = NULL;
//    a3._right = NULL;
//    treeNode* root = &a1;
//    mirrorTree(root);
//    cout << root->_value << root->_left->_value << root->_right->_value << endl;
//}
