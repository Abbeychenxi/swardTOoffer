////
////  25.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////二叉树中和为某一值的路径
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct treeNode {
//    int _value;
//    treeNode* _left;
//    treeNode* _right;
//};
//
//void FindPathCore(treeNode* root, int number, vector<treeNode*> path, int currentSum) {
//    currentSum += root->_value;
//    path.push_back(root);
//    bool isLeaf = root->_left == NULL && root->_right == NULL;
//    if (isLeaf && currentSum == number) {
//        cout << "find path: ";
//        for_each(begin(path), end(path), [](treeNode* root){ cout << root->_value << " "; });
//        cout << endl;
//    }
//    if (root->_left != NULL) {
//        FindPathCore(root->_left, number, path, currentSum);
//    }
//    if (root->_right != NULL) {
//        FindPathCore(root->_right, number, path, currentSum);
//    }
//    path.pop_back();
//}
//
//void FindPath(treeNode* root, int number) {
//    if (root == NULL) {
//        return;
//    }
//    vector<treeNode*> path;
//    int currentSum = 0;
//    FindPathCore(root, number, path, currentSum);
//}
//
//
//int main() {
//    treeNode a1,a2,a3,a4,a5;
//    a1._value = 10;
//    a2._value = 5;
//    a3._value = 12;
//    a4._value = 4;
//    a5._value = 7;
//    a1._left = &a2;
//    a1._right = &a3;
//    a2._left = &a4;
//    a2._right = &a5;
//    a3._left = NULL;
//    a3._right = NULL;
//    a4._left = NULL;
//    a4._right = NULL;
//    a5._left = NULL;
//    a5._right = NULL;
//    treeNode* root = &a1;
//    FindPath(root, 22);
//}
