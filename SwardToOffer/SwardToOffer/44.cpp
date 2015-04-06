////
////  44.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/6.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////扑克牌的顺子
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int compare(const void* a, const void* b) {
//    return *(int*)a - *(int*)b;
//}
//
//bool isContinuous(int* numbers, int length) {
//    if (length < 0 || numbers == NULL) {
//        throw "Invalid input.";
//    }
//    qsort(numbers, length, sizeof(int), compare);
//    
//    int numberOfZero = 0;
//    
//    for (int i = 0; i != length && numbers[i] == 0; ++i) {
//        ++numberOfZero;
//    }
//    int start = numberOfZero;
//    int end = numberOfZero+1;
//    int gap = 0;
//    while (start < end) {
//        if (numbers[start] == numbers[end]) {
//            return false;
//        }
//        gap += numbers[end] - numbers[start] - 1;
//        start = end;
//        ++end;
//    }
//    
//    return numberOfZero >= gap ? true : false;
//}
//
