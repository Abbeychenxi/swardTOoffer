////
////  14.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/4.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////调整数组顺序使得奇数位于偶数的前面
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool isEven(int n){
//    if (n & 0x1) {
//        return true;
//    }else
//        return false;
//}
//
//void Reorder(vector<int>& input, bool (*func)(int)){
//    auto first = input.begin();
//    auto last = input.end() - 1;
//    while (first < last) {
//        while (func(*first) && first < last) {
//            ++first;
//        }
//        while (!func(*last) && first < last) {
//            --last;
//        }
//        swap(*first, *last);
//    }
//}
//
//int main(){
//    vector<int> input = {1,2,3,4,5};
//    Reorder(input, isEven);
//    for_each(begin(input), end(input), [](int n){cout << n << " ";});
//}