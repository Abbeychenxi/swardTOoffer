////
////  24.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////二叉搜素树的后续遍历
////输入一个整数数组，判断它是不是一个二叉搜索树的后续遍历
//
//#include <iostream>
//
//using namespace std;
//
//bool verifyTree(int* input, int length) {
//    if (input == NULL) {
//        throw "Invalid input";
//    }
//    
//    int root = input[length - 1];
//    
//    int i = 0;
//    for (; i < length; ++i) {
//        if (input[i] > root) {
//            break;
//        }
//    }
//    for (int j = i; j < length; ++j) {
//        if (input[j] < root) {
//            return false;
//        }
//    }
//    bool left = true;
//    if (i > 0) {
//        left = verifyTree(input, i);
//    }
//    
//    bool right = true;
//    if (i < length - 1) {
//        right = verifyTree(input + i, length - i - 1);
//    }
//    return left && right;
//}