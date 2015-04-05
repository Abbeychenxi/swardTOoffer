////
////  23.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////从上往下打印二叉树
//
//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//struct treeNode {
//    int _value;
//    treeNode* _left;
//    treeNode* _right;
//};
//
//void printTree(treeNode* root) {
//    if (root == NULL) {
//        return;
//    }
//    deque<treeNode*> d;
//    
//    d.push_back(root);
//    while (d.size()) {
//        treeNode* index = d.front();
//        d.pop_front();
//        cout << index->_value << " ";
//        
//        if (index->_left) {
//            d.push_back(index->_left);
//        }
//        if (index->_right) {
//            d.push_back(index->_right);
//        }
//    }
//}