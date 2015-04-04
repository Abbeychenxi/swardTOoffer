////
////  6.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/4.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////重建二叉树
////前序遍历{1,2,4,7,3,5,6,8}
////中序遍历{4,7,2,1,5,3,8,6}
//
//#include <stdio.h>
//#include <iostream>
//#include <exception>
//
//using namespace std;
//
//struct treeNode{
//    int _value;
//    treeNode* _left;
//    treeNode* _right;
//};
//
//treeNode* constructCore(int* preFirst, int* preLast, int* inFirst, int* inLast){
//    int rootValue = preFirst[0];
//    cout << rootValue << endl;
//    treeNode* root = new treeNode();
//    root->_value = rootValue;
//    root->_left = NULL;
//    root->_right = NULL;
//    if (preFirst == preLast) {
//        if (*preFirst == *preLast && inFirst == inLast) {
//            return root;
//        }else
//            throw "Invalid";
//    }
//    int* rootInOrder = inFirst;
//    while (rootInOrder <= inLast && *rootInOrder != rootValue) {
//        ++rootInOrder;
//    }
//    if(rootInOrder == inLast && *rootInOrder != rootValue){
//        throw "Invalid";
//    }
//    int leftLength = static_cast<int>(rootInOrder - inFirst);
//    int* leftPreLast = preFirst + leftLength;
//    if (leftLength > 0) {
//        root->_left = constructCore(preFirst+1, leftPreLast, inFirst, rootInOrder-1);
//    }
//    if (leftLength < preLast - preFirst) {
//        root->_right = constructCore(leftPreLast+1, preLast, rootInOrder+1, inLast);
//    }
//    return root;
//}
//
//treeNode* constructTree(int* preOrder, int* inOrder, int length){
//    if (preOrder == NULL || inOrder == NULL || length <= 0) {
//        return NULL;
//    }
//    return constructCore(preOrder, preOrder+length-1, inOrder, inOrder+length-1);
//}
//
//int main(int argc, const char * argv[]) {
//    int preOrder[8] = {1,2,4,7,3,5,6,8};
//    int inOrder[8] = {4,7,2,1,5,3,8,6};
//    constructTree(preOrder, inOrder, 8);
//    return 0;
//}
