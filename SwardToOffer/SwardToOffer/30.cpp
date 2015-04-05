////
////  30.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////最小的K个数
////1. partition
////2. 堆排序
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int partition(int* input, int n, int start, int end) {
//    int mid = (start+end)/2;
//    int pivot = input[mid];
//    int i = start;
//    int j = end;
//    while (i < j) {
//        while (input[start] <= pivot) {
//            ++i;
//            break;
//        }
//        while (input[end] >= pivot) {
//            --j;
//            break;
//        }
//        swap(input[i], input[j]);
//    }
//    return i;
//}
//
//
//void getLeastNumber(int* input, int n, int* output, int k) {
//    if (input == NULL || output == NULL || k > n || n <= 0 || k <= 0) {
//        return;
//    }
//    
//    int start = 0;
//    int end = n - 1;
//    int index = partition(input, n , start, end);
//    while (index != k - 1) {
//        if (index > k-1) {
//            end = index - 1;
//            index = partition(input, n, start, end);
//        }
//        else {
//            start = index + 1;
//            index = partition(input, n, start, end);
//        }
//    }
//    for (int i = 0; i < k; ++i) {
//        output[i] = input[i];
//    }
//}
//
//int main() {
//    int a[8] = {4,5,1,6,2,7,3,8};
//    int b[4];
//    getLeastNumber(a, 8, b, 4);
//    for_each(begin(b), end(b), [](int n){ cout << n << " "; });
//}
