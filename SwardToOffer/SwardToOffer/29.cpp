////
////  29.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////数组中出现次数超过一半的数字
//
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int MoreThanHalfNum(int* input, int length) {
//    if (input == NULL || length < 0) {
//        throw "Invalid input!";
//    }
//    int result = input[0];
//    int count = 1;
//    for (int i = 1; i != length; ++i) {
//        if (count == 0) {
//            result = input[i];
//            count = 1;
//        }
//        else if (input[i] == result) {
//            ++count;
//        }
//        else
//            --count;
//    }
//    return result;
//}
//
//
//int main() {
//    int i[9] = {1,2,3,2,2,2,5,4,2};
//    int result = MoreThanHalfNum(i, 9);
//    cout << result << endl;
//}